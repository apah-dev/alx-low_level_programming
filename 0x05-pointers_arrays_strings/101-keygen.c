#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates a random password and validates it.
*
* Return: 0 (Always Success)
*/
int main(void)
{
	int sum = 2772;
	int passwordLength = 0;
	int random;
	char password[100];
	time_t t;

	srand((unsigned int)time(&t));
	while (sum > 126)
	{
		random = rand() % 126;
		password[passwordLength] = random;
		sum -= random;
		passwordLength++;
	}

	if (sum > 0)
	{
		password[passwordLength] = sum;
		passwordLength++;
	}
	else
	{
		passwordLength--;
	}

	password[passwordLength] = '\0'; // Null-terminate the password

	printf("Password: %s\n", password);

	if (strcmp(password, "valid_password") == 0)
	{
	printf("Tada! Congrats\n");
	}
	else
	{
	printf("Wrong password\n");
	}

	return (0);
}

