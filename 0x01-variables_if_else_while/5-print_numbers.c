#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program that prints all single digit number of base 10
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	
	putchar(10);
	return (0);
}
