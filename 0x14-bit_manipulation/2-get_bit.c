#include "main.h"

/**
 * get_bit - this returns the value of a bit at a specified index
 * @no:the numeric value to be explored
 * @ind:the index of the bit
 *
 * Return:the value of the bit
 */


int get_bit(unsigned long int no, unsigned int ind)
{
	int nos;

	if (ind >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	nos = (no >> ind) & 1;

	return (nos);
}
