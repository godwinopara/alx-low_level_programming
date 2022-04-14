#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks it character in argument(@c) is uppercase
 *
 * @c: The character that is to be checked
 *
 * Return: Always 0.
 *
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}

	return (0);
}
