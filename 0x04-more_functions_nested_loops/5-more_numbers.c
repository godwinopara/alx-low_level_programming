#include "main.h"

/**
 * print_numbers - print numbers 0 - 14
 *
 * Return: Always success.
 */
void print_numbers(void);

/**
 * more_numbers - print numbers 0 - 14
 * in 10 places
 *
 *
 * Return: Always success.
 *
 */


void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		print_numbers();
		i++;
	}

	_putchar('\n');
}

/**
 * print_numbers - print 0 - 14
 *
 * Description: print the number 0 - 14
 *
 * Return: Always success
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 61)
	{
		_putchar(i);
		i++;
	}
}

