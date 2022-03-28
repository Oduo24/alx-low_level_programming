#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer[98] = {0x00};
	char *b[] = {0x01};
	int n = 95;

	_memset(buffer, b, n);
	printf("-------------------------------------------------\n");
	return (0);
}
