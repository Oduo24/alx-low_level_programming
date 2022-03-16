#include "main.h"
/**
 *main - entry point
 *Return: - Always 0 (Success)
 *
*int main(void)
*{
*	print_alphabet();
*	return (0);
*}
*/
void print_alphabet(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
		for (i = 0; i < 27; i++)
		{
			_putchar(alphabet[i]);
		}
	_putchar('\n');
	return;
}

