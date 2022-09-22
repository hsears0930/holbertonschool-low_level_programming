#include "main.h"
/**
 * _isdigit - main function
 * @c: digits
 *
 * Description: checks c for digits and returns one
 *
 * Return: Always 0 on success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
	return (0);
}
