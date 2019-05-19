#ifndef PROCESS_H
#define PROCESS_H

#include "palindrom.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

char *File_input(const char *in);
void Partition(char str[], char sep[]);
char *Transformation(char *Array, char KAVO[]);

#endif