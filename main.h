#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int prnt_c(char c);
int prnt_str(const char *str);
int prnt_d(int num);
int _strlen(const char *str);
int _putchar(char c);

#endif /* MAIN_H */
