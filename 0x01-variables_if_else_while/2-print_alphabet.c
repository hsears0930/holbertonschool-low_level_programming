#include <stdio.h>
/**
 * putchar - writes characters to the stdout
 * return: 0
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
		putchar('\n');
	return (0);
}
