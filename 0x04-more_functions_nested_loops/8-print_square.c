#include "main.h"
/**
*print_square - main function
*@size: determines the amount of characters or newline to be printed
*Description: printing hashtags based off of the variable size
*Return: always square size or newline on success
*/
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
