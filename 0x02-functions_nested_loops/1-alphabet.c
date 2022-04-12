#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase
 * followed by newline
 *
 * Return: Always success.
 */

void print_alphabet(void)
{
	char alphabet;

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
