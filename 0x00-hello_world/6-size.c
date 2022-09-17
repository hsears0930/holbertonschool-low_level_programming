#include <stdio.h>
/**
 * sizeof - unary op that evals the size in memory of var or type in bytes
 * printf - displays formatted output to standard
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llintType;
	float floatType;

	printf("Size of a char: %lu bytes\n", sizeof(charType));
	printf("Size of a int: %lu bytes\n", sizeof(intType));
	printf("Size of a long int: %lu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %lu bytes\n", sizeof(llintType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));

	return (0);
}
