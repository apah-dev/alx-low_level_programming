#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* generate_password - generates a random valid password
* Return: the generated password
**/
char *generate_password()
{
	static char password[7];
	int i;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		password[i] = rand() % 26 + 'A'; // Generating random uppercase letters
	}
	password[6] = '\0'; // Null terminator

	return (password);
}

int main(void)
{
	char *password = generate_password();

	printf("Generated Password: %s\n", password);

	return (0);
}

