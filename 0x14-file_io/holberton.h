#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int _putchar (char c);

ssize_t read_textfile(const char *filename, size_t letters);

#endif /*HOLBERTON_H*/
