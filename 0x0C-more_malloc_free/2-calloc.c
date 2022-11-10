#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @size: size of byte
 * @nmemb: number of bytes
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = malloc(sizeof(nmemb * size));

	if (cal == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		cal[a] = 0;

	return (cal);
}
