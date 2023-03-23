#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - Prints numbers, followed by a new line.
 *
 *@separator: The string to be printed between numbers
 *
 *@n: The number of integers passed to the function
 *
 *@...: A variable number of numbers to be printed.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list para;
	unsigned int i;

	/*initialize the va_list*/
	va_start(para, n);

	/*loop through the arguments and print them*/
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(para, int));

		/* print the separator if it's not NULL and we're not at the end */
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	/*clean up the va_list*/
	va_end(para);

	/*print newline*/
	printf("\n");
}
