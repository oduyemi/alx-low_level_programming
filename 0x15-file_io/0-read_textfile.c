#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads text file print to STDOUT.
 * @file_: text file text file that will be read
 * @content: number of file content to be read
 * Return: v- the value of bytes read and printed
 *        0 when function fails or when file_==NULL.
 */
ssize_t read_textfile(const char *file_, size_t content)
{
	char *dot;
	ssize_t dt;
	ssize_t v;
	ssize_t a;

	dt = open(file_, O_RDONLY);
	if (dt == -1)
		return (0);
	dot = malloc(sizeof(char) * content);
	a = read(dt, dot, content);
	v = write(STDOUT_FILENO, dot, a);

	free(dot);
	close(dt);
	return (v);
}
