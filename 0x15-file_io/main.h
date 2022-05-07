#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/file.h>
#define BUFSIZE 1024
#define PERMS 0600
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
char *create_buf(int size);
void close_file(int file);

#endif
