#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function is to know the last number
 *
 * Return: zero when program runs successful
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}

	return (0);
}
