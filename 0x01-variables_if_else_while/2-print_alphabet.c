#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints alphabet in lowercase followed by newline
 *
 * Return: Always (success)
 */

int main(void)
{
	for(int x  = 'A'; x <= 'Z'; x++)
	{
		int low_case = tolower(x)
		putchar(low_case)
	}	
}
