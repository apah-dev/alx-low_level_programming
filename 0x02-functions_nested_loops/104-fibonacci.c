#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, fib_next;

	printf("%u", fib1);

	for (count = 2; count <= 98; count++)
	{
		printf(", %lu", fib2);

		fib_next = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");
	return (0);
}

