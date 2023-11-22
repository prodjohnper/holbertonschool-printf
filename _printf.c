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
			count += prnt_c(*format);
		} else {
			format++;
			if (*format == '\0') {
				prnt_str("(null)");
				count += _strlen("(null)");
			} else if (*format == 's') {
				count += prnt_str(va_arg(args, char *));
			} else if (*format == 'c') {
				count += prnt_c(va_arg(args, int));
			} else if (*format == 'd' || *format == 'i') {
				count += prnt_d(va_arg(args, int));
			} else if (*format == '%') {
				count += prnt_c('%');
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
