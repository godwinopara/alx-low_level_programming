#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: A program that print alphabet in lowercase and 
 * then in uppercase followed by newline
 *
 * Return: Always (success)
 */
int main(void)
{
	int i = 65;

	while (i < 123)
	{
		if (i < 90)
		{
			putchar(tolower(i));
		}
		else if (i > 96)
		{
			putchar(toupper(i));
		}

		i++;
	}

	putchar(10);
}
