#include "palindrom.h"
#include "process.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *Array = File_input(argv[1]);
  int k;
  printf("Текст: \n");
  for (k = 0; k < strlen(Array); k++) {
    printf("%c", Array[k]);
  }

  for (k = 0; k < strlen(Array); k++) {
    if (Array[k] == '\n') {
      Array[k] = ' ';
    }
  }

  // Набор символов, которые должны входить в искомый сегмент
  char sep[2] = " ";
  // Переменная, в которую будут заноситься начальные адреса частей
  // строки str
  Partition(Array, sep);
  free(Array);
  return 0;
}