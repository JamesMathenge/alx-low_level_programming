#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password_length, i;
	char password[16];
	const char charset[] = "abcdefghijklmnopqrstuvwxyz\n"
				"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789\n"
				"!@#$%^&*()_+{}[];:<>,.?/|";

	srand(time(NULL));
	password_length = rand() % 16;

	for (i = 0; i < password_length; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}
	password[password_length] = '\0';
	fprintf(stderr, "%s\n", password);
	return (0);
}
