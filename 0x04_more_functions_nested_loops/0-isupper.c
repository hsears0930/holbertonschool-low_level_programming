#include "main.h"
/**
 * _isupper - main function
 *
 * Description: defines my prototype
 * @c is my int
 *
 * Return: Always 0 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		else
		return (0);
}
