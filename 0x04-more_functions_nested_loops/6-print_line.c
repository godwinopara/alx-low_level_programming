#include "main.h"

/**
 * print_line - print "-" on stdout
 *
 * @n: the number of "-" to print
 *
 * Return: Always success.
 */

void print_line(int n)
{
	int i = 0;


	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar(10);
}
