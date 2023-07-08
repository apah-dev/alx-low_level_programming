#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* _atoi - convert string to number
* @str: the string to be passed
* Return: integer conversion
*/
int _atoi(char *str)
{
	int sign = 1;
	int index = 0;
	unsigned int result = 0;

	while (!(str[index] <= '9' && str[index] >= '0') && str[index] != '\0')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}

	while (str[index] <= '9' && (str[index] >= '0' && str[index] != '\0'))
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}

	result *= sign;
	return (result);
}

