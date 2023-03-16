#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints character on stdout
 *
 *@ch:character
 *
 *Return:1(on Success) -1 (on Error)
 *
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
