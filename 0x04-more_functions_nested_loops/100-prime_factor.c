#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor of the number
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int a;

	for (a = 2; a < num; a++)
	{
		if ((num % a) == 0)
		{
			num = num / a;
		}
	}
	printf("%ld\n", a);
	return (0);
}
