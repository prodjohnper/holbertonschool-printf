#include "main.h"

/**
 * _strlen - Fucntion that returns
 * the length of a string.
 *
 * @s: Takes char as argument.
 *
 * Return: Length of string, 1 success 0 otherwise.
 */

int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
