#include "main.h"

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
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
		}
	}

	return (0);
}
