#include "main.h"
/**
 *times_table - prints time table
 *Return: Always 0 (Success)
 */
void times_table(void)
{
	char i = 0, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
