#include <unistd.h>

/**
 *_putchar -  prints character on stdout
 *@ch:character to be printed
 *Return:1 (On Success)
 *Otherwise -1
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
