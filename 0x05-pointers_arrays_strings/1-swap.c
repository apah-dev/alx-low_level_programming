#include "main.h"

/**
 * swap_int - swaps the value of two integers a and b.
 * @a: pointer datatype that stores the value of a
 * @b: pointer datatype that stores the value of b
**/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
