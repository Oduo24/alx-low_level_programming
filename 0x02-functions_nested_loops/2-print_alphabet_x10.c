#include "main.h"
/**
 *print_alphabet - outputs alphabets a-z
 *Return: - Always void (Success)
 *
 */
void print_alphabet(void)
{
int i,j;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
	}
	_putchar('\n');
}
