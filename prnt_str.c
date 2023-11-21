#include "main.h"

/**
 * prnt_str - Function that prints a string.
 *
 * @s: parameter.
 *
 * Return: Length of the string printed.
 */

int prnt_str(const char *str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		write(1, str, _strlen(str));
		return (_strlen(str));
	}
}
