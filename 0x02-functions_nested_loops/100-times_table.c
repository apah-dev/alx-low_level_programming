#include "main.h"

/**
* print_times_table - prints the times table from 0 to a specified number
* @n: the number to be specified
*
* Description: This function prints the n times table, starting from 0,
* up to the specified number of rows and columns (n). The table is printed
* with equal spacing between the rows and columns.
*/
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			_putchar('0');
			for (column = 1; column <= n; column++)
			{
				product = row * column;
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
				_putchar(((product / 100) % 10) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}

