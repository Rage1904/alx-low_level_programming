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
	 *	putchar(1);
	 *}
	 */

	printf("infinite loop avoided! \\o/\");

	return (0);
}
