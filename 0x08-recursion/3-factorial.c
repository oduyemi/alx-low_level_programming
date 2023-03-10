#include "main.h"

/**
 *factorial - function that returns the factorial of a given number
 *
 *@n:integer number
 *
 *Return: factorial of n
 *
 *Otherwise: -1 (on error)
 *
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
