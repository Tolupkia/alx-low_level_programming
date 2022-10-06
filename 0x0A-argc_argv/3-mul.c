#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints product of argument numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if two argument not given
 */

int main(int agc, char *argv[])
{
	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* multiply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
