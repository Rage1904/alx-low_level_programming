#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all the numbers of base 16 in lowercase
 * Return: 0 (Correct)
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)

		putchar(hexvalues[i]);

	putchar('\n');
	return (0);
}
