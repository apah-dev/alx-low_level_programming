#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: This program uses a while loop to generate
  *		lowercase alphabets
  * Return: Always 0 (Success)
  */
int main(void)
{
	char the_alphabets;

	for (the_alphabets = 'a'; the_alphabets <= 'z'; the_alphabets++)
	{
		if (the_alphabets != 'q' && the_alphabets != 'e')
		{
			putchar(the_alphabets);
		}
	}

	putchar('\n');

	return (0);
}
