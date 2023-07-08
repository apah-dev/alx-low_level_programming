#include "main.h"

/**
* _strncat - concatenates two strings up to n bytes
* @dest: destination string
* @src: source string
* @n: maximum number of bytes from src to concatenate
* Return: pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	ptr++;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}

