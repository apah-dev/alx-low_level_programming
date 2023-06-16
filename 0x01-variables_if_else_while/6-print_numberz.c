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
	int base_ten;

	for (base_ten = 0; base_ten <= 9; base_ten++)
	{
		putchar('0' + base_ten);
	}

	putchar('\n');

	return (0);
}
