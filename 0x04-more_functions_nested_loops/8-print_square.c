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

	if (size > 0)
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}

			_putchar(10);

			i++;
		}
	}
	else
	{
		_putchar(10);
	}
}
