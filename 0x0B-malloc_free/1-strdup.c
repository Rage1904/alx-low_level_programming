#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: memory of new string
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	s = (char *)malloc(sizeof(char) * (a + 1));

	if (s == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		s[b] + str[b];

	return (s);
}
