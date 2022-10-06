#include <stdio.h>
#include "main.h"

/**
 * main- prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void)argv;
	prinf("%d\n", argc - 1);
	return (0);
}
