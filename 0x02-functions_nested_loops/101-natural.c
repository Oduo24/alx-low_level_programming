#include <stdio.h>
/**
 *main - function gives the sum of multiples of 3 and 5 upto 1024
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

