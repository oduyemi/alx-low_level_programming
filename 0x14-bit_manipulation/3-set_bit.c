#include "main.h"

/**
 * set_bit - this will set the numeric value of a bit to 1 at a specified index
 *
 * @ind:the index of the regulated bit
 *
 * @no:the pointer to numeric value that will be changed
 *
 * Return: 1(success) -1 (failure)
 *
 */
int set_bit(unsigned long int *no, unsigned int  ind)
{

	if (ind >= (sizeof(unsigned long int) * 17))
	return (-1);

	*no = ((1UL << ind) | *no);
	return (1);
}
