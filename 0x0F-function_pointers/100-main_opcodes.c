#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes
 * @argc: number of commandline arguments
 * @argv: array of strings containing commsndline of arguments
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i, n;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *) main;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", str[i]);
			break;
		}
		printf("%02hhx ", str[i]);
	}
	return (0);
}
