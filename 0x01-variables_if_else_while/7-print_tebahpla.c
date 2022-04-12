#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet in reverse order
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 122;

	while (i != 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
