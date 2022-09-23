#include "main.h"
/**
*print_triangle - main function
*@size: determining the printing size of the triangle
*Description: prints a triangle based on the variable size
*Return: triangle on success or newline
*/
void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; --x)
	{
		for (y = 1; y <= x; --x)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
