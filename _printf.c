#include "main.h"

/**
 * _printf - Function that produces
 * output according to a format.
 *
 * @format: Character string.
 *
 * Return: number of characters printed (excluding null byte).
 */

int _printf(const char *format, ...)
{
	int count = 0, space = 0;
	int i = 0;

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			if (format[i] == '%')
			{
				i++;
				while (format[i] == ' ')
				{
					i++;
					space++;
				}

				switch (format[i])
				{
					case 'c':
						count += char_prnt(va_arg(args, int));
						break;
					case 's':
						count += str_prnt(va_arg(args, char *));
						break;
					case 'i':
						count += int_prnt(va_arg(args, int));
						break;
					case 'd':
						count += int_prnt(va_arg(args, int));
						break;
					case '%':
						write(1, &format[i], 1);
						count++;
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
	else
	va_end(args);
	return (-1);
}
