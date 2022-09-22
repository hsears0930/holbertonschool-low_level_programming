#include "main.h"
/**
 * _isupper - main function
 * @c: uppercase
 *
 * Description: defines my prototype
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
