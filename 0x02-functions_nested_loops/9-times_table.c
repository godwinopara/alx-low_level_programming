#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9 times tables starting with 0
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 9)
			{
				printf("%d", i * j)
			}
			else
			{
				_putchar(i * j);
				_putchar(',');
			}
		}
	}
}
