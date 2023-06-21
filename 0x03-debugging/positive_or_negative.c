#include "main.h"

/**
  * positive_or_negative - Prints positive or negative
  *
  * Description: This function neg or postive based on
  * given input
  *
  * Return: Always 0 (Success)
  */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
