#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc
 * @ptr: pointer
 * @old_size: old memory block
 * @new_size: new memory block
 * Return: the pointer else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
