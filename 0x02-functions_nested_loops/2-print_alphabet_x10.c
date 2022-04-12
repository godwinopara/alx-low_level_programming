#include "main.h"
/**
 * print_az - print alphabet a - z in lowercase
 *
 * Return: Always 0.
 */

void print_az(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - print a - z 10 times
 *
 * Return: Alway 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_az();
		i++;
	}
}
