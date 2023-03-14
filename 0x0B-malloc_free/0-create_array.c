#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars
 *
 *@size: size in bytes of a character
 *
 *@c:character
 *
 *Return: pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_ch;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr_ch = malloc(size * sizeof(char));
	if (ptr_ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr_ch[i] = c;
	}
	return (ptr_ch);
}
