#include <stdio.h>
/**
 * main - comment the bug
 * Return: 0 (Correct)
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	/**
	 * while (i < 10)
	 *{
	 *	putchar(i);
	 *}
	 */

	printf("infinite loop avoided! \\o/\n");

	return (0);
}
