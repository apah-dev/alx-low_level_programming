#include <stdio.h>

/**
* main - Prints the sum of even Fibonacci numbers below 4,000,000.
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	unsigned long sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
		{
			sum += first;i
			printf("%lu, " first);
		}
		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);
	return (0);
}

