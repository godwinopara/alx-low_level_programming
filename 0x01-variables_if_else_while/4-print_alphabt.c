#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints out alphabets in lowercase without the alphabet
 * q and e followed by a new line
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}

