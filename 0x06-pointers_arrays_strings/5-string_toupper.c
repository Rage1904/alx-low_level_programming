#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: integer
 * Return: integr
 */

char *string_toupper(char *n)
{
	int a = 0;

	while (n[a] != '\0')
	{
		if (n[a] >= 'a' && n[a] <= 'z')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);

}
