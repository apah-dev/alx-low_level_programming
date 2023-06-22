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
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				printf("%d", product);

				if (j != n)
				{
					printf(", ");
					if (product < 10)
						printf(" ");
				}
			}
			printf("\n");
		}
	}
}
