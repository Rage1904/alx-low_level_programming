#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: (correct)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		if (ch != 'e' && ch != 'q')

			putchar(ch);

		else
		{
		}

	putchar('\n');
	return (0);
}