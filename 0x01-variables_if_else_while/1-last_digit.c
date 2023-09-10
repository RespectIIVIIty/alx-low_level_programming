#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - this is the main function
 *
 * Return: O when successful
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		prinf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10)  < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d andis less than 6 and not 0\n",
			n, n % 10);
	}
	else 
	{
		printf("Last digit of %d is %d andis 0\n",
			n, n % 10);
	}

	return (0);
	
}
