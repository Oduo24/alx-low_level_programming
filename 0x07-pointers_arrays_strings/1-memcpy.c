#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - function that copies the memory address  content
 * @n: number of bytes to be copied
 * @dest: destination address
 * @src: source address
 * Return: dest (destination address)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
