#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: NULL if it fails elsea pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;

	unsigned int str = n, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len]; len++)
		str++;
	concat = malloc(sizeof(char) * (str + 1));
	if (concat == NULL)
		return (NULL);
	str = 0;

	for (len = 0; s1[len]; len++)
		concat[str++] = s1[len];

	for (len = 0; s2[len] && len < n; len++)
		concat[str++] = s2[len];

	concat[str] = '\0';

	return (concat);

}
