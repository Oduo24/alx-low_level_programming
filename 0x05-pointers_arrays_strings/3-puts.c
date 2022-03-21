#include "main.h"
/**
 * _puts - prints a string
 * Return: void
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;
	char strng[] = *str;

	for (i = 0; strng[i] != '\0'; i++)
	{
		_putchar(strng[i]);
	}
	_putchar('\n');
}
