#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(va_list val);
int strlen_helper(char *s);

#endif
