#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - Prints strings, followed by a new line
 *
 *@separator: The string to be printed between strings.
 *
 *@n: The number of strings passed to the function
 *
 *@...: A variable number of strings to be printed
 *
 *If separator is NULL, it is not printed.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list para;
	char *str;
	unsigned int i;

	va_start(para, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(para, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(para);
	printf("\n");
}
