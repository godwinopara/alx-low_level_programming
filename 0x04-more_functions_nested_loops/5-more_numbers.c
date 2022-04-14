#include "main.h"

/**
 * print_0_to_9 - print numbers 0 - 9
 *
 * Return: Always success.
 */
void print_0_to_9(void);

/**
 * print_10_to_14 - print numbers 10 - 14
 *
 * Return: Always success.
 */

void print_10_to_14(void);

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
		print_0_to_9();
		print_10_to_14();
		_putchar('\n');
		i++;
	}

	_putchar('\n');
}

/**
 * print_0_to_9 - print 0 - 9
 *
 * Description: print the number 0 - 9
 *
 * Return: Always success
 */

void print_0_to_9(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
}


/**
 * print_10_to_14 - print number 10 - 14 from ascii
 *
 * Return: Always success
 */

void print_10_to_14(void)
{
	int i = 48;

	while (i <= 52)
	{
		_putchar(49);
		_putchar(i);
		i++;
	}
}

