#include "main.h"
/**
 *_islower - determines if a letter is lower case
 *Return: - Always 1 (Success)
 *@c: input
 */
int _islower(int c)
{
	int c;
	
	if (c > 96 && c < 123)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}

