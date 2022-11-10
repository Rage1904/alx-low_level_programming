#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to new array, else NULL
 */

int *array_range(int min, int max)
{
	int *n;
	int a;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(*n) * ((min - max) + 1));

	if (n == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		n[a] = min;

	return (n);
}
