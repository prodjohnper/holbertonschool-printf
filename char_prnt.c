#include "main.h"

/**
 * char_prnt - Function that prints a char.
 *
 * @c: char to print.
 *
 * Return: 0 success or length of char.
 */

int char_prnt(char c)
{
	if (c != '\0')
	{
		write(1, &c, 1);
		return (1);
	}

	else
	{
		return (0);
	}
}
