#include "main.h"

/**
 * str_prnt - Function that prints a string.
 *
 * @s: parameter.
 *
 * Return: Length of the string printed.
 */

int str_prnt(char *s)
{
	if (s != NULL)
	{
		int length = _strlen(s);

		write(1, s, length);
		return (length);
	}

	else if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	else
	{
		return (0);
	}
}
