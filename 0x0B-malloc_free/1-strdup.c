#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - returns pointer to newly alloacated memory
 *
 *@str:string
 *
 *Return:NULL if str = NULL
 *
 *On success,returns a pointer to the duplicated string.
 *
 */
char *_strdup(char *str)
{
	char *new_str;
	int j;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		new_str[j] = str[j];
	}
	return (new_str);
}
