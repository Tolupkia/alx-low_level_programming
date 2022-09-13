#include "main.h"

/**
 * main - print _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '0')
	{
		putchar(s[i]);
		i++;
	}
	putchar(10);

	return (0);
}
