#include "main.h"

/**
 * more_numbers - Prints the numbers 0 - 14 ten times.
 *
 * Return: 0 (Always successful)
 */

void more_numbers(void)
{
	int i;
	int j;
	int digit;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			digit = j;

			if (digit > 9)
			{
				_putchar('1');
				digit %= 10;
			}

			_putchar('0' + digit);
		}
	_putchar('\n');
	}
}
