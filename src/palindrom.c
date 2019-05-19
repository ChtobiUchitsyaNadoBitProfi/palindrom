#include "palindrom.h"

#define KGRN "\x1B[32m"
#define KWHT "\x1B[37m"

int Palindrom(char *istr) {
  const char *end = istr;
  while (*end)
    end++; // ищем конец строки (нулевой байт)
  end--; // отступаем назад на один байт (от нулевого)

  for (; istr < end; istr++, end--) {
    if (*istr != *end)
      return 0;
  }

  return 1;
}