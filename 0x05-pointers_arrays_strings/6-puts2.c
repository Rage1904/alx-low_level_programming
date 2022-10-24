#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: char of a string
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
