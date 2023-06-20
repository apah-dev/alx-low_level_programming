#include "main.h"

/**
 * print_alphabet_x10 - Prints all alphabets in lowercase letters 10 times
 *
 * Description: This function prints all alphabets in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int lowercase;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (lowercase = 97; lowercase <= 122; lowercase++)
		{
			_putchar(lowercase);
		}

		_putchar('\n');
	}
}
