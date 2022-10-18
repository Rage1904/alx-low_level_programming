#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number to check
 * Return: 1 and print + if n is greater that 0 and print 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('_');
		return (-1);
	}
}
