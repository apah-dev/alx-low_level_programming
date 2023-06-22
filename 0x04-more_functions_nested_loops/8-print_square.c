#include "main.h"
/**
* print_square - prints a square as output.
* @n: The number of times the hash is printed out.
*/
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				for (j = 0; j < i; j++)
				{
					_putchar('#');
				}
			_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
}
