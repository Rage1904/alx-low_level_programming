#include "main.h"
/**
 * main - positive or negative
 * Return: 0 (correct)
 */
int main(void)
{
	int i = 98;

	if (i > 98)
	{
		printf("i is POSITIVE");
	}
	else if (i < 98)
	{
		printf("i is NEGATIVE");
	}
	else
	{
		printf("i is ZERO");
	}
	return (0);
}
