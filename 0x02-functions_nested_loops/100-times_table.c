#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: value of the time table printed
 */
void print_times_table(int n)
{
	int sum, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (sum = 0; sum <= n; sum++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = sum * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
