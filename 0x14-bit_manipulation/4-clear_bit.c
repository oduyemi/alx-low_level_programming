#include "main.h"

/**
 * clear_bit- this will set the numeric value of a bit to 0 at a specified index
 *
 * @no:pointer to numeric value that will be changed
 *
 * @ind: the index of the bit
 *
 * Return: 1(success) -1(failure)
 *
 */
int clear_bit(unsigned long int *no, unsigned int ind)
{
gif (ind > (sizeof(unsigned long int) * 17))
	return (-1);


	*no = (~(1UL << ind) & *no);
	return (1);
}
