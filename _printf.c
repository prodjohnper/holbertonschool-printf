#include "main.h"
/**
 * _printf - Function that produces
 * output according to a format.
 * @format: Character string.
 *
 * Return: number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
        int count = 0;
        va_list args;

        va_start(args, format);

        while (*format) {
                if (*format != '%') {
                        count += char_prnt(*format);
                } else {
                        format++;
                        if (*format == '\0') {
                                str_prnt("(null)");
                                count += _strlen("(null)");
                        } else if (*format == 's') {
                                 count += str_prnt (va_arg(args, char *));
			}
				if (*format == 'c') {
                                	count += char_prnt(va_arg(args, int));
                        } else if (*format == 'd' || *format == 'i') {
                                count += prnt_d (va_arg(args, int));
                        } else if (*format == '%') {
                                count += char_prnt('%');
                        }
                }
                format++;
        }
        va_end(args);
        return (count);
}
