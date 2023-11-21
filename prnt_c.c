#include "main.h"

/**
 * prnt_c - Function that prints a char.
 *
 * @c: char to print.
 *
 * Return: 0 success or length of char.
 */

int prnt_c(const char c)
{
	return (write(1, &c, 1));
}
