#include "main.h"
#include <stdio.h>

/**
* print_times_table - prints the n times table starting from 0
* @n: number of times
*
* Description: This function prints the multiplication table for the given
* value of n. The table starts from 0 and goes up to n times.
* If n is greater than 15 or less than 0, nothing is printed.
*/
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int row, column, product;

		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				printf("%d", product);

				if (column != n)
					printf(",  ");
					printf("  "
			}

			printf("\n");
		}
	}
}

