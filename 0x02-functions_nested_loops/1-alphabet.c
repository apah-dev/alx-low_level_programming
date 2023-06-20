#include "main.h"

/**
 * print_alphabet - Prints all alphabets in lowercase letters
 *
 * Description: This function prints all alphabets in lowercase letters
 * Return: void
 */
void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}

	_putchar('\n');
}
