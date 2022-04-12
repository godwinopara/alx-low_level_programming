#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possibile combination of single digit
 * number seperated with comma using putchar
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}

		i++;
	}
	putchar(10);
	return (0);
}
