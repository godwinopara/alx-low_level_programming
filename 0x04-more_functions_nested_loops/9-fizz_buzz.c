#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print fizz buzz from 1 - 100
 *
 * Return: Always success.
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			prinf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}

	return (0);
}
