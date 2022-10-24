#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;

	*b = i;
}
