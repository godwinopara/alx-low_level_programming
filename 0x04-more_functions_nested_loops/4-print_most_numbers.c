#include "main.h"

/**
 * print_most_numbers - print numbers from 0 - 9
 * omitting 2 and 4
 *
 * Return: Always success.
 *
 */

void print_most_numbers(void);
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
