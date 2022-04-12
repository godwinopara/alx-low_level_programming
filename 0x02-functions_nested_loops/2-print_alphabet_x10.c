#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by newline
 *
 * Return : Always 0.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
