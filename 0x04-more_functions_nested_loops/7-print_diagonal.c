#include "main.h"
/**
*print_diagonal - main function
*Description: print a diagonal line else just newline
*@n: indicates the number of times the diagonal is printed
*Return: diagonal line and new lines on success
*/
void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
