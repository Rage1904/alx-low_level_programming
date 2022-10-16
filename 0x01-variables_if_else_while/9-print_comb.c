#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: print all possible combinations of single-digit numbers
 * Return: 0 (Correct)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
