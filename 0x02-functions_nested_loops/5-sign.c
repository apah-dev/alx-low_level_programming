#include "main.h"

/**
 * print_sign - Checks input num is > < or = zero.
 * @n: Input number
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
