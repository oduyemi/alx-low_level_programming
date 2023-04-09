#include "main.h"

/**
 * append_text_to_file - This will append text at the end of a file.
 * @file_: This points to the name of the created file.
 * @letterContent: The string that will be added to the end of the file.
 *
 * Return: If the function fails or file_ == NULL - -1.
 *         If the file does not exist, it means that the user does not have write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *file_, char *letterContent)
{
	int a, v, length = 0;

	if (file_ == NULL)
		return (-1);

	if (letterContent != NULL)
	{
		for (length = 0; letterContent[length];)
			length++;
	}

	a = open(file_, O_WRONLY | O_APPEND);
	v = write(a, letterContent, length);

	if (a == -1 || v == -1)
		return (-1);

	close(a);

	return (1);
}
