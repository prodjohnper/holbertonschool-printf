#include "main.h"

/**
 * _strlen - Fucntion that returns
 * the length of a string.
 *
 * @s: Takes char as argument.
 *
 * Return: Length of string, 1 success 0 otherwise.
 */

int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
