#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length, a;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	ptr = (char *) malloc(length * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < length; a++)
	{
		ptr[a] = str[a];
	}
	ptr[a] = '\0';

	return (ptr);
}

/**
 * new_dog - creates a new dog
 * @name: bingo name
 * @age: bingo's age
 * @owner: bingo's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;
	char *bingo_name, *bingo_owner;

	bingo = malloc(sizeof(dog_t));
	if (bingo == NULL)
		return (NULL);

	bingo_name = _strdup(name);
	if (bingo_name == NULL)
	{
		free(bingo);
		return (NULL);
	}

	bingo_owner = _strdup(owner);
	if (bingo_owner == NULL)
	{
		free(bingo_name);
		free(bingo);
		return (NULL);
	}
	bingo->name = bingo_name;
	bingo->age = age;
	bingo->owner = bingo_owner;
	return (bingo);
}
