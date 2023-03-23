#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Returns the sum of all its paramters
 *
 *@n: The number of paramters passed to the function
 *
 *@...: A variable number of paramters to calculate the sum of.
 *
 *Return: If n == 0 - 0.
 *Otherwise - the sum of all parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	int sum = 0;
	unsigned int i;

	/*initialize the va_list*/
	va_start(para, n);

	/*loop through the arguments and add them to sum*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(para, int);
	}
	/*clean up the va_list*/
	va_end(para);

	/*return the sum*/
	return (sum);
}
