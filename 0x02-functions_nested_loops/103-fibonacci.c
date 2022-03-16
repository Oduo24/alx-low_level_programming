#include <stdio.h>

/**
 *main - Sums the even fibonacci numbers less than 4000000
 *Return: 0 if successful
 */

int main(void)
{
	unsigned long x, y, sum;


	y = 1;
	x = 2;
	sum = 0;

	while (x < 4000000)
	{
		unsigned long z = x;
		if (x % 2 == 0)
		{
			sum += x;
		}
		else
		{
			x = x + y;
			y = z;
		}
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
