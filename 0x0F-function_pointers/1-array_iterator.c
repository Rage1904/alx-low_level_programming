#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter
 * @array: the array to be operated on
 * @size: the size of the array
 * @action: points to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
