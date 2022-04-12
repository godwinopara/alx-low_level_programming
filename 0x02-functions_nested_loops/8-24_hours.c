#include "main.h"
#include <stdio.h>

/**
 * print_min - print every minutes from 00 to 59
 *
 * @i : The argument for the hour example if I(hr) is 00
 * and min is 50 it print out 00:50
 *
 * Return: Always 0.
 */

void print_min(int i)
{
	int j = 0;

		while (j < 60)
		{
			if (i < 10)
			{
				if (j < 10)
				{
					printf("0%d:0%d\n", i, j);
				}
				else
				{
					printf("0%d:%d\n", i, j);
				}
			}
			else if (j < 10)
			{
				if (i < 10)
				{
					printf("0%d: 0%d\n", i, j);
				}
				else
				{
					printf("%d: 0%d\n", i, j);
				}
			}
			else
			{
				printf("%d:%d\n", i, j)
			}

			j++;
		}

}

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: Always 0.
 */


void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		print_min(i);
		i++;
	}

	return (0);
}
