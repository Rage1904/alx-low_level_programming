#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: integers
 * Return: reverse
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c < n; c++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
