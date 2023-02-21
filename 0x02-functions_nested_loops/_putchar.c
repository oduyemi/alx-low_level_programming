#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes character the ch to stdout
 * @ch: the character to print
 * Return: On success 1
 * On error: -1 is returned
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}

