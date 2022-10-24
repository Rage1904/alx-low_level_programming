#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: char string
 * @dest: char string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
