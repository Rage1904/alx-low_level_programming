#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: half the string
 */

void puts_half(char *str)
{
	int i = 0, l = 0, n;

	while (str[i++])
		l++;

	if ((l % 2) == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;
	for (i = n; i < l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
