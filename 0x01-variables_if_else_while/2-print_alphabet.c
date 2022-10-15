#include <stdio.h>
/**
 * main - entry point
 * Description: write a programme that prints alphabets in lowercase.
 * Return: 0 (Correct)
 */
int main(void)
{
	int ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar(10);

		return (0);
}
