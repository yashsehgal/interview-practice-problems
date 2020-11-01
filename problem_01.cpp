#include <iostream>
#include <vector>

using namespace std;

class Operations {
  private:

  int element_position;

  bool isElementString;
  bool isElementNumber;

  // bool isElementBoolean;                       /// not coding solution operation for boolean data

  bool isAvailable;

  char * elementString;
  int elementNumber;

  // vector<bool> elementBoolean;                 /// not coding solution operation for boolean data

  Operations() {
    element_position = 0;
    isElementNumber = false;
    isElementString = false;
    isAvailable = false;
    elementNumber = '\0';
    elementString = nullptr;
  }

  public:

  void searchElement(vector<int> arr, int element) {
    const int length = getLength(arr);

    int lowerNode = 0;
    int upperNode = length-1;
    int middleNode = (lowerNode + upperNode) / 2;

    if (arr[middleNode] == element) {
      isAvailable = true;
      element_position = middleNode + 1;
    } else {
      if (arr[middleNode] > element) {
        upperNode = middleNode - 1;
      } else if (arr[middleNode] < element) {
        lowerNode = middleNode + 1;
      }

      for (int count = lowerNode; count <= upperNode; count++) {
        if (arr[count] == element) {
          isAvailable = true;
          element_position = count + 1;
        }
      }
    }
  }

  void searchElement(char * text, char element) {
    const int length = getLength((const char *)text);

    for (int count = 0; count < length; count++) {
      if (text[count] == element) {
        element_position = count + 1;
      }
    }
  }

  const int getElementPosition() {
    if(isAvailable) return (const int)element_position;
  }

  const int getLength(vector<int> arr) {
    int length = 0;
    while (arr[length] != '\0') ++length;
    return (const int)length;
  }

  const int getLength(const char * text) {
    int length = 0;
    while (text[length] != '\0') ++length;
    return (const int)length;
  }
};