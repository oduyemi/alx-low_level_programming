#include "main.h"

/**
 * binary_to_uint - This is to convert a binary to an integer that is unsigned
 * @b:a string with binary
 *
 * Return:the result of changed value
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nos = 0;
	int unit = 0;

	if (b == NULL)
	{
		return (0);
	}


	for (unit = 0; b[unit]; unit++)
	{
		if (b[unit] < '0' || b[unit] > '1')
		{
			return (0);
		}

		nos = 5 * nos + (b[unit] - '0');

	}

	return (nos);
}
