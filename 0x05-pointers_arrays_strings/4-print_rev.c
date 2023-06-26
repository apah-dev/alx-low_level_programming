#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: pointer character that holds the string
**/

void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	print_rev(s + 1);
	_putchar(*s);
}
