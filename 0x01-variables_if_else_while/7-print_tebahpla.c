#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints lowercase alphabets in reverse
 * Return: 0 (correct)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)

		putchar(a);

	putchar('\n');
	return (0);
}
