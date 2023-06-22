#include <stdio.h>

/**
* main - Prints the sum of natural numbers below 1024 that are multiples of 3 or 5.
*
* Return: Always 0.
*/
int main(void)
{
	int number, sum;

	for (number = 1; number < 1024; number++)
	{
		if ((number % 3) == 0 || (number % 5) == 0)
		sum += number;
	}

	printf("%d\n", sum);
	
	return (0);
}
