#include "main.c"
#include <ctype.h>

/**
 * _isdigit - checks if argument is a digit
 *
 * @c : The value to be checked
 *
 * Return: Always 0.
 *
 */

int _isdigit(int c)
{
	if(isdigit(c))
	{
		return (1);
	}

	return (0);
}
