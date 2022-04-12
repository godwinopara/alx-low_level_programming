#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: print all the number of base 16 in lowercase
 *
 * Return: Always (success)
 */

int main(void)
{
	int i = 48;

	while (i <= 70)
	{
		if (i >= 65)
		{
			putchar(tolower(i));
		}
		else if (i <= 57)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
