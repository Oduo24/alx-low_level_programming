#include "main.h"
/**
 *print_alphabet - outputs alphabets a-z
 *Return: - Always void (Success)
 *
*{
*	print_alphabet();
*	return (0);
*}
*/
void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
	_putchar('\n');
}

