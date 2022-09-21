#include "main.h"

/**
 * print_alphabet_x10 - main function
 *
 * Description: printing a-z ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int z = 1;

	while (z++ <= 10)
	{
		char x;
		
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar (x);
		}
		putchar ('\n');
	}
}
