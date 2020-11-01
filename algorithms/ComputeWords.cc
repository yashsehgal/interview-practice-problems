#include "ComputeWords.h"
#include <cstring>


int ComputeWords::computeWordCount(const char * text) {
  int length = 0;
  while (text[length] != '\0') {
    ++length;
  }

  int wordCount = 0;

  if (text != nullptr) {
    wordCount += 1;
  }

  for (int count = 0; count < length; count++) {
    // if (std::is_upper(text[count]))
  }
}