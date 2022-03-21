#include "main.h"
/**
 * _strlen - determines the length of a string
 * Return: int result
 * @s: pointer to string
 */
int _strlen(char *s)
{
	int i;
	int result;

	for (i = 0; s[i] == '\0'; i++)
	{
		result = i;
	}
	return (result);
}
