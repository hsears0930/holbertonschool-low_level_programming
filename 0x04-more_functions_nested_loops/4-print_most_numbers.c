#include "main.h"
/**
*print_most_numbers - main function
*Description: printing except for two and four
*Return: zero to nine on success
*/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')

		_putchar (i);
	}
	_putchar ('\n');
}
