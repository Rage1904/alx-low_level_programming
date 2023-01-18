#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: 3rd string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
