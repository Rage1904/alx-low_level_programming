#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string
 * @s: - string
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
