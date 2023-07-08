#include "main.h"

/**
 * _abs - Calculates the absolute value of an integer
 * @n: Input number
 *
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
