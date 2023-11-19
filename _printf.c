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
	int count = 0, space = 0;
	int i;
	va_list args;
	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i++)
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
				case 'c': case 's': case 'i': case 'd':
					count += (format[i] == 'c') ? char_prnt(va_arg(args, int)) : 
						(format[i] == 's') ? str_prnt(va_arg(args, char *)) :
						int_prnt(va_arg(args, int)); 
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
	}
	va_end(args);
	return (count);
}
