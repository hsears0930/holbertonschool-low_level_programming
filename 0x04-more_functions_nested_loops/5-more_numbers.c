#include "main.h"
/**
*more_numbers - main function
*Description: printing from zero to fourteen
*Return: zero to fourteen on success
*/
void more_numbers(void)
{
	int z = 1;

	while (z++ <= 10)
	{
		int x;

		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + '0');

			_putchar ((x % 10) + '0');
		}
		_putchar ('\n');
	}
}
