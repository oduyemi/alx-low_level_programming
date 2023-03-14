#include "main.h"
#include <stdlib.h>

/**
 *str_concat - points to newly allocated memory
 *
 *@s1:first string
 *
 *@s2:second string
 *
 *Return:Null on failure
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int j, i;

	/*handle null inputs*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		j++, i++;
	}
	concat[i] = '\0';
	return (concat);
}
