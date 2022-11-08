#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		s[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, c++)
		s[c] = s2[b];

	return (s);
}
