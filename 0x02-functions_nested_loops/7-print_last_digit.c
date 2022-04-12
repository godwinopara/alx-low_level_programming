#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: The number where the last digit will be printed from
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int result = n % 10;
	
	_putchar(result + '0');
	return (result);
}
