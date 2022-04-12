#include "main.h"
#include "ctype.h"
/**
 * _islower - print 1 if character is lowercase
 * or 0 if character is uppercase
 *
 * @c: contains value to be compared
 *
 * Return: Always 0
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
