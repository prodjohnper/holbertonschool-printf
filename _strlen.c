#include "main.h"

/**
 * _strlen - Fucntion that returns
 * the length of a string.
 *
 * @s: Takes char as argument.
 *
 * Return: 1 success 0 otherwise.
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;

	return (index);
}
