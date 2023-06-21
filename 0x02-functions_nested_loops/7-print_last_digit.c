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

	last_value = n % 10;

	if (n < 0)
	{
		last_value = -1 * (last_value);
		return (last_value);
	}
	else
	{
		_putchar(last_value + '0');
		return (last_value);
	}
}
