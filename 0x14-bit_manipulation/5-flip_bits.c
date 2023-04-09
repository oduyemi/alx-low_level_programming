#include "main.h"

/**
 * flip_bits - this records numeric value of bits to be altered
 *
 * @fn:the first number
 *
 * @sn:the second number
 *
 * Return:this returns the numeric value of bits that will be altered
 *
 */
unsigned int flip_bits(unsigned long int fn, unsigned long int sn)
{
	unsigned int counter = 0;

	unsigned long int exclusiveOR = fn ^ sn;

	while (exclusiveOR != 0)
	{
		counter += exclusiveOR & 1;
		exclusiveOR >>= 1;
	}

	return (counter);
}
