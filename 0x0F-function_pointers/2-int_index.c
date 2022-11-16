#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: working environment
 * @cmp: is the number of elements in the array
 * @size: is the number of elements in the array
 * Return: index of first element if cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	int search = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
		search = cmp(array[a]);
		if (search != 0)
			return (a);
	}

	return (-1);
}
