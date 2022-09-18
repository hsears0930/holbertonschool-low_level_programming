#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * printf - displays the assigned text
 * scanf - scans input according to designated format
 * %d: for decimal integer
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
