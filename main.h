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
int _print_string(char *s);
int _strlen(char *s);
int _strlenc(const char *s);
int _print_int(int num);
int _print_unsigned_int(unsigned int num);

#endif
