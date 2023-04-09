#include "main.h"

/**
 * create_file - This creates files.
 * @file_: This is a pointer to the name of the file that will be created.
 * @letterContent: This points to the string to write to the file created.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *file_, char *letterContent)
{
	int dt, v, length = 0;

	if (file_ == NULL)
		return (-1);

	if (letterContent != NULL)
	{
		for (length = 0; letterContent[length];)
			length++;
	}

	dt = open(file_, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(dt, letterContent, length);

	if (dt == -1 || v == -1)
		return (-1);

	close(dt);

	return (1);
}
