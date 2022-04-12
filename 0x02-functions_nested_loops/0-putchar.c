#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Prints '_putchar'
 *
 * Return: Always (success)
 */
int _putchar(char c)

int main(void)
{
	_putchar("_putchar");

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
