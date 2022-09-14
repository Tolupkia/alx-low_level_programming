#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten timmes
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_printchar(alpha);
		}
		_putchar('\n');
	}
}
