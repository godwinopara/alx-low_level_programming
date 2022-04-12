#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabetic character
 *
 * @c: character to be checked
 *
 * Return: Always 0.
 */

int _isalpha(int c);
{
	if (isalpha(c))
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
