#ifndef __SPACE_Y_LIB_LOGGER__
#define __SPACE_Y_LIB_LOGGER__

#include <cstring>
#include <cstdio>
#include <cstdarg>
#ifdef ARDUINO
#include <Arduino.h>
#else
#include <iostream>
#include <chrono>
unsigned long millis() {
    unsigned long ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::high_resolution_clock::now().time_since_epoch())
            .count();
    return ms; 
}
#endif

#define __MAX_STRN_BOUND 255
#define __MAX_STR_LEN 1024 // 1023 chars + null char
static char STR_BUFFER[__MAX_STR_LEN];
static bool (*loggerCallback)(const char*) = NULL;
void log_set_callback(bool (*callback)(const char*)) { loggerCallback = callback; }

// #define LOG_USE_COLOR
#ifdef LOG_USE_COLOR
#define LOG_COLOR_BLACK   "\033[1;30m"
#define LOG_COLOR_RED     "\033[1;31m"
#define LOG_COLOR_GREEN   "\033[1;32m"
#define LOG_COLOR_YELLOW  "\033[1;33m"
#define LOG_COLOR_BLUE    "\033[1;34m"
#define LOG_COLOR_MAGENTA "\033[1;35m"
#define LOG_COLOR_CYAN    "\033[1;36m"
#define LOG_COLOR_WHITE   "\033[1;37m"
#define LOG_COLOR_DEFAULT "\033[0m"
#endif

int _log_timestamp_header_to_buffer(const char* header, const char* prefix = "", const char* suffix = "") {
  unsigned long time = millis();
  int h  = time / 1000 / 60 / 60,
      m  = time / 1000 / 60 % 60,
      s  = time / 1000 % 60,
      ms = time % 1000;
  return snprintf(STR_BUFFER, __MAX_STR_LEN, "%s[%02d:%02d:%02d.%03d %s]:%s ", prefix, h, m, s, ms, header, suffix);
}
int log_no_callback_info(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("INFO", LOG_COLOR_CYAN, LOG_COLOR_WHITE);
#else
  int offset = _log_timestamp_header_to_buffer("INFO");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_WHITE);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif

  return offset;
}
int log_no_callback_warn(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("WARN", LOG_COLOR_YELLOW);
#else
  int offset = _log_timestamp_header_to_buffer("WARN");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_DEFAULT);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif
  
  return offset;
}
int log_no_callback_error(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("ERROR", LOG_COLOR_RED);
#else
  int offset = _log_timestamp_header_to_buffer("ERROR");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_DEFAULT);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif
  
  return offset;
}

int log_info(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("INFO", LOG_COLOR_CYAN);
#else
  int offset = _log_timestamp_header_to_buffer("INFO");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_DEFAULT);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif

  if(loggerCallback != NULL)
  if(!loggerCallback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }
  
  return offset;
}
int log_warn(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("WARN", LOG_COLOR_YELLOW);
#else
  int offset = _log_timestamp_header_to_buffer("WARN");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_DEFAULT);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif

  if(loggerCallback != NULL)
  if(!loggerCallback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }

  return offset;
}
int log_error(const char * fmt, ...) {
#ifdef LOG_USE_COLOR
  int offset = _log_timestamp_header_to_buffer("ERROR", LOG_COLOR_RED);
#else
  int offset = _log_timestamp_header_to_buffer("ERROR");
#endif

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  offset += vsnprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, fmt, arg_ptr);
  va_end(arg_ptr);

#ifdef LOG_USE_COLOR
  offset += snprintf(STR_BUFFER + offset, __MAX_STR_LEN - offset, "%s", LOG_COLOR_DEFAULT);
#endif

#ifdef ARDUINO
  Serial.println(STR_BUFFER);
#else
  std::cout << STR_BUFFER << std::endl;
#endif

  if(loggerCallback != NULL)
  if(!loggerCallback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }

  return offset;
}

#endif