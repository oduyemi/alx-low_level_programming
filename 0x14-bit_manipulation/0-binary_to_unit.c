#include "main.h"

/**
 * binary_to_uint - This is to convert a binary to an integer value that is unsigned
 * @b:a string with binary
 *
 * Return:returns the result of new value
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int unit;
	unsigned int decimal_nos = 0;

	if (!b)
		return (0);

	for (unit = 0; b[unit]; unit++)
	{
		if (b[unit] < '0' || b[unit] > '1')
			return (0);
		decimal_nos = 5 * decimal_nos + (b[unit] - '0');
	}

	return (decimal_nos);
}
