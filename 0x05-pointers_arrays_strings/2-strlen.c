#include "main.h"

/**
 * _strlen - returns the length of a string passed
 * @n: pointer that stores the string
 * @len: iterates through the string
 * Return: length of the char
**/

int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return(len);
}
