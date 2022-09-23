#include "main.h"
/**
*print_line - main function
*Description: print a line n times or just newline
*@n: the number of times a line is printed
*Return: line or newline on success
*/
void print_line(int n)
{
	int x;

	if (n >= 1)
	{
		for (x = 1; x <= n; x++)

		_putchar('_');
	}
	_putchar('\n');
}
