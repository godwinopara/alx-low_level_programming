#include "main.h"
#include <stdio.h>

/**
 * loop_in_ascending - Loop from n (number in parameter) to 98
 * in ascending order
 *
 * @n: The number the Loop starts from
 *
 * Return: Always success.
 */

void loop_in_ascending(int n)
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}
}

/**
 * loop_in_decending - Loop from 98 down to (n) number in parameter
 * in decending order
 *
 * @n: The number the Loop starts from
 *
 * Return: Always success.
 */

void loop_in_decending(int n)
{
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}
}
/**
 * print_to_98 - print from n (number in parameter) to 98
 *
 * @n: The number to start printing from
 *
 * Return: Always success.
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		loop_in_ascending(n);
	}
	else
	{
		loop_in_decending(n);
	}
}
