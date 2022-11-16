#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - finds operation function
 * @s: operator (+, -, *, /, %)
 * Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (a < 5 && s != NULL)
	{
		if (s[0] == *(ops[a].op))
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
