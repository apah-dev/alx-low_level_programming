#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: Input number
 *
 * Return: Last value of input number
 */

int print_last_digit(int n)
{
	int last_value;
	int rem = n % 10;

	if (n < 0)
	{
		last_value = -1 * (rem);
	}
	else
	{
		_putchar(rem + '0');
		return (rem);
	}
}
