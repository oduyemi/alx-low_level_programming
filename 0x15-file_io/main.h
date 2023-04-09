#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *file_, size_t content);
int create_file(const char *file_, char *letterContent);
int append_text_to_file(const char *file_, char *letterContent);

#endif

