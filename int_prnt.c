#include "main.h"

/**
 * int_prnt - Function that prints an integer.
 *
 * @num; Integer to print.
 *
 * Return: Length of integer printed.
 */

int int_prnt(int num)
{
	int i;
	char numarr[10];
	int count = 0, negative = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		negative++;
		num = (-1) * num;
	}

	for (i = 9; num != 0; i--)
	{
		numarr[i] = '\0' + (num % 10);
		num = num / 10;
	}

		i++;
		count = 10 - i;
		write(1, &numarr[i], count);
		return (negative + count);
}
