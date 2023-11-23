#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int prnt_c(int c);
int prnt_str(const char *str);
int prnt_d(int num);
int _strlen(const char *str);
int _putchar(char c);

#endif /* MAIN_H */
