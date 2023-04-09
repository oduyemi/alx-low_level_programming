#include "main.h"

/**
 * get_endianness - get_endianness
 *
 * Return:0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
	int ends = 1;
	char *dinn_ = (char *) &ends;

	return (*dinn_);
}
