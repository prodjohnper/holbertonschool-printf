#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int char_prnt(char c);
int str_prnt(char *s);
int int_prnt(int num);
int def_prnt(char c);
int _strlen(char *s);
int _putchar(char c);

#endif /* MAIN_H */
