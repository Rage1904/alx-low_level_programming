#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aa;
	int b, c, d, ca;

	if (ac == 0)
		return (NULL);

	for (b = c = 0; c < ac; c++)
	{
		if (av[c] == NULL)
			return (NULL);

		for (d = 0; av[c][d] != '\0'; d++)
			b++;
		b++;
	}

	aa = malloc((b + 1) * sizeof(char));

	if (aa == NULL)
	{
		free(aa);
		return (NULL);
	}

	for (c = d = ca = 0; ca < b; d++, ca++)
	{
		if (av[c][d] == '\0')
		{
			aa[ca] = '\n';
			c++;
			ca++;
			d = 0;
		}
		if (ca < b - 1)
			aa[ca] = av[c][d];
	}
	aa[ca] = '\0';

	return (aa);
}
