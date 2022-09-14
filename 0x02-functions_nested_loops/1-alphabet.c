#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: 0
 */

viod print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
