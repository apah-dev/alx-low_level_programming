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
	int base_sixteen;

	for (base_sixteen = 0; base_sixteen < 16; base_sixteen++)
	{
		if (base_sixteen < 10)
		{
			putchar('0' + base_sixteen);
		}
		else
		{
			putchar('a' + base_sixteen - 10);
		}
	}

	putchar('\n');

	return (0);
}
