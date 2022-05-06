#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/file.h>
#define BUFSIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);

#endif
