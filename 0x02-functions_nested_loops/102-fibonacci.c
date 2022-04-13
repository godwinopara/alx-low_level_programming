#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the first 50 fibonacci number
 *
 * Return: Always success.
 *
 */

int main(void)
{
	int i;
	long int fib1 = 0;
	long int fib2 = 1;
	long int next_fib;

	for (i = 0; i < 50; i++)
	{
		next_fib = (fib1 + fib2);
		printf("%ld\n", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}

	return (0);
}
