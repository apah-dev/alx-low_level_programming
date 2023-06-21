#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: Input number
 *
 * Return: Last value of input number
 */

int print_last_digit(int n)
{
	int rem;

	if (n < 0)
	{
		rem = -1 * (n % 10);
	}
	else
	{
		rem = n % 10;
		_putchar((rem % 10) + '0');
		return (rem % 10);
	}
}
