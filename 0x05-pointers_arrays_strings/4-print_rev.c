#include  "main.h"
/**
 * print_rev - reverses a string
 * Return: void
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int i;

	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
