#include "strings.h"

// int slen(char* str)
// {
//     int count = 0;

//     while (str[count] != '\0') {
//         count++;
//     }
//     return count;
// }

int slen(char *s) {
  char *ch;
  for (ch = s; *ch != '\0'; ++ch) {
    return ch - s;
  }
}