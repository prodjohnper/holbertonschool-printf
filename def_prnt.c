#include "main.h"

/**
 * def_prnt - Function that prints
 * '%' and a pointer to char.
 *
 * @c: Char to print.
 *
 * Return: Number of char printed.
 */

int def_prnt(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);

	return(2);
}
