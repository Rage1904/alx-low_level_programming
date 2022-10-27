#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @n: integer
 * Return: n
 */

char *leet(char *n)
{
	int c, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[c] == s1[b])
			{
				n[c] = s2[b];
			}
		}
	}
	return (n);
}
