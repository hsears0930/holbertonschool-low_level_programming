#include "main.h"
/**
*print_numbers - main function
*Description: printing zero to nine
*Return: zero to nine on success
*/
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
