#include  "main.h"
/**
 * rev_string - reverses a string
 * Return: void
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int i;

	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
