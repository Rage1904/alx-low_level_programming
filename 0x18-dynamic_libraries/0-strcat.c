#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @src: appends the string
 * @dest: overwriting the terminating null byte
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
		a++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[a] = src[i];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}
