#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * checker - checks the code
 *
 * Return: Returns 0.
 */
int checker(int num, char **val)
{
	ssize_t x;

	if (num != 2)
	{
		dprintf(2, "Usage: %s filename\n", val[0]);
		exit(1);
	}
	x = read_textfile(val[1], 114);
	printf("\n(printed chars: %li)\n", x);
	x = read_textfile(val[1], 1024);
	printf("\n(printed chars: %li)\n", x);
	return (0);
}
