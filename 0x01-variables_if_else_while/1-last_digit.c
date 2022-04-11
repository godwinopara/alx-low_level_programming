#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: This function will assign a random number to
 * the variable n each time it is executed
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n);
	}
	else if (n < 6)
	{
		printf("Last digit of %d is %d is less than 6 and not 0", n, n);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, n);
	}
	return (0);
}
