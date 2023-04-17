#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
/**
 * _strcpy - function that copies string
 * @dest: where string is copied
 * @src: copied string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int z, length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}

	for (z = 0; z <= length; z++)
	{
		dest[z] = src[z];
	}
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: success if creates a new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length_1, length_2;

	length_1 = _strlen(name);
	length_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
		_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;

	return (dog);
}

