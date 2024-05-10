#ifndef __SPACE_Y_LIB_LOGGER__
#define __SPACE_Y_LIB_LOGGER__

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
#include <cstring>
#include <cstdio>
#include <cstdarg>

#define __MAX_STRN_BOUND 255
#define __MAX_STR_LEN 1024 // 1023 chars + null char

extern char STR_BUFFER[__MAX_STR_LEN];
extern bool (*log_callback)(const char*);

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

int _log_timestamp_header_to_buffer(const char* header, const char* prefix = "", const char* suffix = "");
int log_no_callback_info(const char * fmt, ...);
int log_no_callback_warn(const char * fmt, ...);
int log_no_callback_error(const char * fmt, ...);
int log_info(const char * fmt, ...);
int log_warn(const char * fmt, ...);
int log_error(const char * fmt, ...);

#endif