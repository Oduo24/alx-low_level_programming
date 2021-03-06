#include "variadic_functions.h"
/**
 * print_strings - prints all parameters
 * @n: no. of passed strings
 * @separator: separates strings
 * @...: more parameters
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *k = va_arg(args, char *);

		if (k != NULL)
			printf("%s", k);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	trings.printf("\n");
	va_end(args);
}
