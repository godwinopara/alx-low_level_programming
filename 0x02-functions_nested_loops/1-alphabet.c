#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase
 * followed by newline
 *
 * Return: Always success.
 */

void print_alphabet_x10(void);

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		_putchar(low);
		low++;
	}
	_putchar("\n");
	return (0);
}
