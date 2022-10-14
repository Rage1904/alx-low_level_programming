#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints whether the number is positive or negative.
 * Return: 0
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d zero\n", n);
	}
	return (0);
}
