#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * checker - checks the code
 *
 * Return: Returns 0.
 */
int main(int num, char **val)
{
	int chg;

	if (num != 3)
	{
		dprintf(2, "Usage: %s file_ text\n", val[0]);
		exit(1);
	}
	chg = create_file(val[1], val[2]);
	printf("-> %i)\n", chg);
	return (0);
}
