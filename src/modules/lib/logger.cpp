#include "logger.hpp"

char STR_BUFFER[__MAX_STR_LEN];
bool (*log_callback)(const char*) = NULL;

void set_log_callback(bool (*callback)(const char*)) { log_callback = callback; }
static int _log_timestamp_header_to_buffer(const char* header, const char* prefix = "", const char* suffix = "") {
  unsigned long time = millis();
  int h  = time / 1000 / 60 / 60,
      m  = time / 1000 / 60 % 60,
      s  = time / 1000 % 60,
      ms = time % 1000;
  return snprintf(STR_BUFFER, __MAX_STR_LEN, "%s[%02d:%02d:%02d.%03d %s]:%s ", prefix, h, m, s, ms, header, suffix);
}
static int log_no_callback_info(const char* fmt, ...) {
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
static int log_no_callback_warn(const char* fmt, ...) {
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
static int log_no_callback_error(const char* fmt, ...) {
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

int log_info(const char* fmt, ...) {
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

  if(log_callback != NULL)
  if(!log_callback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }
  
  return offset;
}
int log_warn(const char* fmt, ...) {
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

  if(log_callback != NULL)
  if(!log_callback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }

  return offset;
}
int log_error(const char* fmt, ...) {
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

  if(log_callback != NULL)
  if(!log_callback(STR_BUFFER)) {
    log_no_callback_warn("[Logger] Callback for logger returned false");
  }

  return offset;
}
