#include "main.h"
/**
  * main - Entry point
  *
  * Description: This program prints all lowercase letters
  * using the defined putchar
  * Return: Always 0 (Success)
  */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}

	_putchar('\n');

	return (0);
}
