#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Input number
 *
 * Return: Last value of input number
 */
int print_last_digit(int n)
{
	int last_value = n % 10;

	if (last_value < 0)
		last_value = -last_value;
	_putchar('0' + last_value);

	return (last_value);
}

