#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - print password.
 *
 * Return: 0.
 */

int main(void)
{
	int total = 2772, count = 0, index, random;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (total > 126)
	{
		random = rand() % 126;
		password[count] = random;
		total -= random;
		count++;
	}
	if (total > 0)
		password[count] = total;
	else
	{
		count--;
	}
	
	for (index = 0; index <= count; index++)
	{
		printf("%c", password[index]);
	}
	return (0);
}

