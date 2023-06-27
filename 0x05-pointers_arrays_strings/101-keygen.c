#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
* main - generate a random password.
*
* Return: 0
*/
int main(void)
{
	int total = 2772;
	int count = 0;
	int index, random;
	char password[100];
	time_t t;

	srand((int)time(&t));
	while (total > 126)
	{
		random = rand() % 126;
		password[count] = random;
		total -= random;
		count++;
	}

	if (total > 0)
	{
		password[count] = total;
		count++;
	}
	else
	{
		count--;
	}

	for (index = 0; index <= count; index++)
	{
		printf("%c", password[index]);
	}
	printf("\n");

	return (0);
}

