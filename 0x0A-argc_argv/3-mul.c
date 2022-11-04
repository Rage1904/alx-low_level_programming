#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies 2 numbers
 * @argc: commandline count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{

		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
