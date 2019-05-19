#include "palindrom.h"
#include "process.h"
//#include "strings.h"

#include <stdio.h>

int main(int argc, char *argv[]) {
  char *Array = File_input(argv[1]);
  int k;
  printf("Текст: \n");
  for (k = 0; k < strlen(Array); k++) {
    printf("%c", Array[k]);
  }

  for (k = 0; k < strlen(Array); k++) {
    Array[k] = tolower(Array[k]);
  }

  /////////////////////////////////////////

  char Buffer[strlen(Array)];
  for (k = 0; k < strlen(Array); k++) {
    Buffer[k] = Array[k];
  }
  char sep[10] = ".:,?!";
  char bomba[2] = " ";
  char *Result = Transformation(Buffer, sep);
  printf("\nПосле ПЕРВОГО преобразования: \n");
  for (k = 0; k < strlen(Result); k++) {
    printf("%c", Result[k]);
  }
  printf("\n");
  Partition(Result, bomba);

  ///////////////////////////////////////////////////

  for (k = 0; k < strlen(Array); k++) {
    Buffer[k] = Array[k];
  }
  char sep2[10] = " ,:?!";
  char bomba2[2] = ".";
  *Result = Transformation(Buffer, sep2);
  Buffer[0] = Array[0];
  printf("\nПосле ВТОРОГО преобразования: \n");
  for (k = 0; k < strlen(Result); k++) {
    printf("%c", Result[k]);
  }
  printf("\n");
  Partition(Result, bomba2);

  ///////////////////////////////////////////////////

  for (k = 0; k < strlen(Array); k++) {
    Buffer[k] = Array[k];
  }
  char sep3[10] = " .,:?!";
  *Result = Transformation(Buffer, sep3);
  Buffer[0] = Array[0];
  printf("\nПосле ТРЕТЬЕГО преобразования: \n");
  for (k = 0; k < strlen(Result); k++) {
    printf("%c", Result[k]);
  }
  printf("\n");
  printf("Палиндромами являются:\n");
  if (Palindrom(Result)) {
    printf("%s%s%s\n", KGRN, Result, KWHT);
  } 

  free(Array);
  return 0;
}