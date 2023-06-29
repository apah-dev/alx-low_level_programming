#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result (r), or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;
	int digit1, digit2, sum;

	while (n1[i] != '\0' || n2[i] != '\0')
	{
		digit1 = (n1[i] != '\0') ? (n1[i] - '0') : 0;
		digit2 = (n2[i] != '\0') ? (n2[i] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;

		if (i >= size_r - 1 || carry > 0)
		{
			return (0);
		}

		r[i] = sum % 10 + '0';
		i++;
	}

	r[i] = '\0';

	return (r);
}

