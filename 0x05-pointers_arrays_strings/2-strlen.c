#include "main.h"
/**
 * _strlen - determines the length of a string
 * Return: int result
 * @s: pointer to string
 */
int _strlen(char *s)
{
	int a = 0, b = 1;
	char c = s[0];

	while (c != '\0')
	{
		a++;
		c = s[b++];
	}

	return (a);
}
