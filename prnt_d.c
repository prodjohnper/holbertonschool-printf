#include "main.h"

/**
 * prnt_d - Function that prints an digit.
 *
 * @num: Digit to print.
 *
 * Return: Length of integer printed.
 */

int prnt_d(int num)
{
	char buffer[20];
	int i = 0, j;

	if (num == 0)
	{
		write(1, "0", 1);
	}

	else if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}

	while (num != 0)
	{
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
	}

	return (i);
}
