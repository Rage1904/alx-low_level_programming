#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description:  print the last digit of the number stored in the variable n.
 * Return: 0 (correct)
 */
int main(void)
{
	int n, lt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt = n % 10;
	if (lt > 5)

		printf("last digit of %d is %d and is greater than 5\n", n, lt);

	else if (n < 6)

		printf("last digit of %d is % is lesser than 6\n", n, lt);

	else

		printf("last digit of %d is %d and is 0\n", n, lt);

	return (0);
}

