#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **s;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		s[a] = malloc(width * sizeof(int));
		if (s[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(s[a]);
			free(s);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			s[a][b] = 0;

	return (s);
}
