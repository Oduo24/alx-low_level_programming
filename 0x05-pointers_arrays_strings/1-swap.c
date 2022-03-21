#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: pointer to integer a
 * @b: pointer to integer b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

