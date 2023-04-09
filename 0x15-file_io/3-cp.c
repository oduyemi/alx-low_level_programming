#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *fiLe);
void close_file(int dt);

/**
 * create_buffer - It will allocate 1024 bytes for one bf.
 * @fiLe: The name of the file bf is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *fiLe)
{
	char *bf;

	bf = malloc(sizeof(char) * 1024);

	if (bf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fiLe);
		exit(99);
	}

	return (bf);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int dt)
{
	int t;

	t = close(dt);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close dt %d\n", dt);
		exit(100);
	}
}

/**
 * copy - Copies the contents of a file to another file.
 * @argsc: The number of arguments provided.
 * @argsv: This is an array that points to the arguments.
 *
 * Return: 0 when successful.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int copy(int argsc, char *argsv[])
{
	int here, there, o, v;
	char *bf;

	if (argsc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp fiLe_here fiLe_there\n");
		exit(97);
	}

	bf = create_buffer(argsv[2]);
	here = open(argsv[1], O_RDONLY);
	o = read(here, bf, 1024);
	there = open(argsv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (here == -1 || o == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: You cannot read from fiLe %s\n", argsv[1]);
			free(bf);
			exit(99);
		}

		v = write(here, bf, o);
		if (there == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: You cannot write to %s\n", argsv[2]);
			free(bf);
			exit(99);
		}

		o = read(here, bf, 1024);
		there = open(argsv[3], O_WRONLY | O_APPEND);

	} while (o > 0);
	

	free(bf);
	close_file(here);
	close_file(there);

	return (0);
}
