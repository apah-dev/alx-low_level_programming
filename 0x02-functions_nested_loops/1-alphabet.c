#include "main.h"
/**
  * main - Entry point
  *
  * Description: This program prints all lowercase letters
  * using the defined putchar
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	int lowercase;

	for(lowercase = 97; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}

	return (0);
}
int main(void)
{
	print_alphabet();

	_putchar('\n');

	return (0);
}
