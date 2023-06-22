#include "main.h"

/**
* more_numbers - Prints the numbers 0 - 14 ten times.
*
* Return: void
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			_putchar('0' + j);
			else
			{
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			}
		}
	}

	_putchar('\n');
}

