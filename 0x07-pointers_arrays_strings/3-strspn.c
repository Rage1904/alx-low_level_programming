#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of the accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	unsigned int c = 0;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] == ' ')
			break;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
				c++;
		}
	}
	return (c);
}
