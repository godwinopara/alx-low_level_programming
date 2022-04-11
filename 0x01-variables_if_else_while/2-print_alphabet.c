#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase followed by newline
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	
	return (0);
}
