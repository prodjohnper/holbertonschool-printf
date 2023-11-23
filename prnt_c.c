#include "main.h"

/**
 * prnt_c - Function that prints a char.
 *
 * @c: char to print.
 *
 * Return: 0 success or length of char.
 */

int prnt_c(int c)
{
	if (c == '\0')
	{
		return (-1);
	}
	else
	{
		write(1, &c, 1);
		return (1);
	}
}
