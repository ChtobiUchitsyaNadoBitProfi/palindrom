#include "process.h"

char *File_input(const char *in) {
  FILE *F;
  int i = 0, k = 0;
  F = fopen(in, "r");

  while (fgetc(F) != EOF) {
    i++;
  }

  char *bass = (char *)malloc(sizeof(char) * i);

  rewind(F);

  for (k = 0; k < i; k++) {
    bass[k] = fgetc(F);
  }

  printf("Символов в тексте: %d\n", i);
  fclose(F);
  return bass;
}

void Partition(char str[], char sep[]) {
  printf("Результат разбиения :\n");
  // Выделение первой части строки
  char *istr;
  istr = strtok(str, sep);
  // Выделение последующих частей
  while (istr != NULL) {

    if (Palindrom(istr)) {
      printf("%s%s%s\n", KGRN, istr, KWHT);
    } else {
      printf("%s\n", istr);
    }
    // Выделение очередной части строки
    istr = strtok(NULL, sep);
  }
}