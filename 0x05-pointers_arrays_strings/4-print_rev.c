#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: pointer character that holds the string
**/

void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	print_rev(s + 1);
}
