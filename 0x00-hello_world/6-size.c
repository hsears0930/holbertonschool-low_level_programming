#include <stdio.h>
/**
 * main - entry point
 *
 * sizeof - unary op that evals the size in memory of var or type in bytes
 *
 * printf - displays formatted output to standard
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}
