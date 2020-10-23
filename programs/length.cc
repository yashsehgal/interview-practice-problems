#include "length.h"

int Length::getLength(const char * data) {
  int length = 0;
  while (data[length] != '\0') {
    ++length;
  }
  return (int)length;
}