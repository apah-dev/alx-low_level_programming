#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked (in ASCII code).
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
