#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all the numbers of base 16 in lowercase
 * Return: 0 (Correct)
 */
int main(void)
{
	char e;
	char f = '0';

	while (f <= '9')

		putchar(f);
		f++;

	for (e ='a'; e <= 'g'; e++)

		putchar(e);

	putchar('\n');
	return (0);
}
