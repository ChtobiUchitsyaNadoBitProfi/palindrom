#ifndef PALINDROM_H
#define PALINDROM_H

#define KGRN "\x1B[32m"
#define KWHT "\x1B[37m"

#include "process.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char text[100];

void findLongestPalindromicString();
int min(int a, int b);
int Palindrom(char *istr);

#endif