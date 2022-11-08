#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: array size
 * @c: stored char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;

	return (ptr);
}
