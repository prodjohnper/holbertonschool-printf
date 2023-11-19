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
	int count = 0, i = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c': case 's': case 'i': case 'd':
					count += (format[i] == 'c') ? char_prnt(va_arg(args, int)) :
						(format[i] == 's') ? str_prnt(va_arg(args, char *)) :
						int_prnt(va_arg(args, int));
					break;
				default:
					count += def_prnt(format[i]);
					i++;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
