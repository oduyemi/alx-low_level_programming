#include <unistd.h>

/**
 *_putchar - prints a character on the stdout
 *@ch: the character to be printed
 *Return: 1 (on Success)
 *Otherwise -1
 *
 */
char _putchar(char ch)
{
	return (write(1, &ch, 1));
}
