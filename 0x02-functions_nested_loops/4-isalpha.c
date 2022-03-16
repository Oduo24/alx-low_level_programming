#include "main.h"
/**
 *_isalpha - checks for alphabetic characters
 *Return: - 1 if c is a letter, lowercase or uppercase, 0 otherwise
 *@c: - input
 */
int _isalpha(int c)
{
	if (64 < c < 91 && 96 < c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

