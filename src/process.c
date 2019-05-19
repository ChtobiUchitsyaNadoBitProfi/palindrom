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
  printf("Палиндромами являются:\n");
  // Выделение первой части строки
  char *istr;
  istr = strtok(str, sep);
  // Выделение последующих частей
  while (istr != NULL) {

    if (Palindrom(istr)) {
      printf("%s%s%s\n", KGRN, istr, KWHT);
    } // else {
      // printf("%s\n", istr);
    //}
    // Выделение очередной части строки
    istr = strtok(NULL, sep);
  }
}

char *Transformation(char *Array, char KAVO[]) {
  int k, i, j;
  for (k = 0; k < strlen(Array); k++) {
    if (Array[k] == '\n') {
      Array[k] = ' ';
    }
  }
  for (k = 0; KAVO[k] != '\0'; k++) {
    for (i = j = 0; Array[i] != '\0'; i++)
      if (Array[i] != KAVO[k]) {
        Array[j++] = Array[i];
      }
    Array[j] = '\0';
  }
  return Array;
}
