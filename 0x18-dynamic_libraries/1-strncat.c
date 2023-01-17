#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings
 * @dest: overwrite
 * @src: append
 * @n: paradigm
 * Return: a pointer to string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
