#include "variable_functions.h"

/**
 * print_numbers - prints varying amount of numbers
 * @seperator: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i != n && seperator != NULL)
				printf("%s", seperator);
		}
		va_end(valist);
	}
	print("\n");
}
