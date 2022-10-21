#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b < (size - a))
				{
					_putchar(' ');
					continue;
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

