#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

static void int_to_str(int value, char *buf);
static void int_to_hex(unsigned int value, char *buf);

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *str = out;
  const char *p = fmt;

  while (*p) {
      if (*p == '%') {
          p++;
          int width = 0;
          int pad_zero = 0;
          if (*p == '0') {
              pad_zero = 1; 
              p++;
          }
          while (*p >= '0' && *p <= '9') {
              width = width * 10 + (*p - '0');
              p++;
          }

          switch (*p) {
              case 'd': {
                  int val = va_arg(ap, int);
                  char buf[32];
                  int_to_str(val, buf);
                  int len = strlen(buf);
                  if (pad_zero && width > len) {
                      for (int i = 0; i < width - len; i++) {
                          *str++ = '0';
                      }
                  }
                  char *b = buf;
                  while (*b) {
                      *str++ = *b++;
                  }
                  break;
              }
              case 's': {
                  char *s = va_arg(ap, char *);
                  if (s == NULL) s = "(null)";
                  while (*s) {
                      *str++ = *s++;
                  }
                  break;
              }
              case 'x': {
                  unsigned int val = va_arg(ap, unsigned int);
                  char buf[32];
                  int_to_hex(val, buf);
                  int len = strlen(buf);
                  if (pad_zero && width > len) {
                      for (int i = 0; i < width - len; i++) {
                          *str++ = '0';
                      }
                  }
                  char *b = buf;
                  while (*b) {
                      *str++ = *b++;
                  }
                  break;
              }
              default: {
                  *str++ = '%';
                  if (*p) *str++ = *p; 
                  break;
              }
          }
          p++;
      } else {
          *str++ = *p++;
      }
  }
  *str = '\0';
  return (int)(str - out);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int printf(const char *fmt, ...) {
  char buf[1024];
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(buf, fmt, ap);
  va_end(ap);
  for (int i = 0; buf[i] != '\0'; i++) {
    putch(buf[i]);
  }
  return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int pos = 0;   
  int total = 0;
  const char *p = fmt;
  
  while (*p) {
    if (*p == '%') {
      p++;  
      switch (*p) {
        case 'd': {  
          int val = va_arg(ap, int);
          char buf[32];
          int_to_str(val, buf);
          char *b = buf;
          while (*b) {
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *b;
              pos++;
            }
            total++;
            b++;
          }
          break;
        }
        case 's': {  
          char *s = va_arg(ap, char *);
          if (s == NULL) s = "(null)";
          while (*s) {
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *s;
              pos++;
            }
            total++;
            s++;
          }
          break;
        }
        default: {   
          if (n > 0 && pos < (int)(n - 1)) {
            out[pos] = '%';
            pos++;
          }
          total++;
          if (*p) {
            if (n > 0 && pos < (int)(n - 1)) {
              out[pos] = *p;
              pos++;
            }
            total++;
          }
          break;
        }
      }
    } else {
      if (n > 0 && pos < (int)(n - 1)) {
        out[pos] = *p;
        pos++;
      }
      total++;
    }
    p++;  
  }
  if (n > 0) {
    out[pos] = '\0';
  }
  return total;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return ret;
}

static void int_to_str(int value, char *buf) {
  char temp[32]; 
  int pos = 0;
  bool neg = false;

  if (value < 0) {
    neg = true;
    value = -value;
  }

  if (value == 0) {
    temp[pos++] = '0';
  } else {
    while (value > 0) {
      temp[pos++] = (char)('0' + (value % 10));
      value /= 10;
    }
  }

  if (neg) {
    temp[pos++] = '-';
  }

  int i = 0;
  while (pos > 0) {
    buf[i++] = temp[--pos];
  }
  buf[i] = '\0';
}

static void int_to_hex(unsigned int value, char *buf) {
  char temp[32]; 
  int pos = 0;

  if (value == 0) {
    temp[pos++] = '0';
  } else {
    while (value > 0) {
      int digit = value % 16;
      temp[pos++] = (digit < 10) ? ('0' + digit) : ('a' + (digit - 10));
      value /= 16;
    }
  }

  int i = 0;
  while (pos > 0) {
    buf[i++] = temp[--pos];
  }
  buf[i] = '\0';
}
