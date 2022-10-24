#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * @str: half a string
 */

void puts_half(char *str)
{
	int a = 0, b = 0, n;

	while (str[a++])
		b++;
	if ((b % 2) == 0)
		n = b / 2;
	else
		n = (b + 1) / 2;
	for (a = n; a < b; a++)
		_putchar(str[a]);
	_putchar('\n');
}
