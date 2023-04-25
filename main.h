#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int checker(char c, va_list args);
int _strlen(char *s);
int _putchar(char c);
int _put_nbr(int n);
int _nbrlen(int n);

#endif
