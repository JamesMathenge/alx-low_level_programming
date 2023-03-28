#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[7];
	int i;

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	}
		password[i] = rand() % 26 + 'a';
	}
	password[6] = '\0';
	printf("Random Password: %s\n", password);
	return (0);
}
