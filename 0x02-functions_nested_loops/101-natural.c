#include <stdio.h>
/**
 *main - function gives the sum of all multiples of 3 and 5 less than 1024 not included
 *Return:  if successful
 */

int main(void)
{
	int n, sum;
	sum = 0;

	for (n = 1023; n > 0; n--)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}

