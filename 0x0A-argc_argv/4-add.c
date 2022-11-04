#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 0)
	{

		printf("error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[2]) + atoi(argv[3]));
	return (0);
}
