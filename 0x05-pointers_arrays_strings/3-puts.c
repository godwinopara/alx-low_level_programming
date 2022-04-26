#include "main.h"
#include <string.h>
/**
 * _puts - print a string followed by a newline
 *
 * @str: the string that will be printed
 *
 * Return: Always success
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
