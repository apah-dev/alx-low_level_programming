#include "main.h"

/**
 * whatsmyname - Prints the program name
 * @name: Name of the program
 */
void whatsmyname(char *name)
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
