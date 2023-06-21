#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: None (void)
 */
void times_table(void)
{
	int i, j, result;
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				_putchar('0');
				count++;
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				count += 3;
			}
			else
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				count += 3;
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				count += 2;
			}
		}

		_putchar('\n');
		count ++;

		if (count >= 380)
			break;
	}
}

