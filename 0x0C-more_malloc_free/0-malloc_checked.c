#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: quantity of byte allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
