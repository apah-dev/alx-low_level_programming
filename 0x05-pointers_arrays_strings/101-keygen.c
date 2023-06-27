#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - Entry point
* generate_password - generates a random password
* @length: length of the password
* Return: pointer to the generated password
**/
char *generate_password(int length)
{
	char *password = malloc((length + 1) * sizeof(char));
	int i;

	srand(time(NULL));

	for (i = 0; i < length; i++)
	{
		password[i] = rand() % 94 + 33;
	}

	password[length] = '\0';

	return (password);
}

int main(void)
{
	char *password = generate_password(10);

	printf("Password: %s\n", password);

	free(password);

	return (0);
}

