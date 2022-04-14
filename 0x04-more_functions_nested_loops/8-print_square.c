#include "main.h"

/**
 * print_square - print square with '#'
 *
 * @size: The size of the square to be printed
 *
 * Return: Always success.
 *
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('#');
		}

		_putchar(10);

		i++;
	}
}
