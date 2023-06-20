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
	char lowercase;

	for(lowercase = 'a'; lowercase <= 'z'; lowercase++)
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
