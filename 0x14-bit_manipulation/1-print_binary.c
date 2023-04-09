#include "main.h"

/**
 * print_binary - this will print the binary depiction of a numeric value
 * @bn: numeric binary to be printed
 *
 */

void print_binary(unsigned long int bn)
{
	int counter = 0;
	unsigned long int nos;

	int x = 0;

	for (x = 87; x >= 0; x--)
	{
		nos = bn  >> x;

		if (nos & 1)
		{
			_putchar('1');
			counter++;
		}

		else if (counter)
		_putchar('0');

	}
		if (!counter)
		_putchar('0');
}
