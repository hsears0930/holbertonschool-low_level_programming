#include "main.h"
/**
 * print_alphabet - main function
 *
 * Description: tells what prototype print_alphabet does
 *
 * Return: Always 0 on success
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
}
