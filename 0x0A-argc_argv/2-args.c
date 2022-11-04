#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all argument it recieves
 * @argc: command line count
 * @argv: command line value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("file name is: %s\n", argv[0]);

	if (argc < 1)
	{
		printf("No argument passed through command line\n");
	}
	else
	{
		printf("first argument is: %s\n", argv[0]);
	}
}
