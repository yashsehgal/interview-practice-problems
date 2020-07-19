#ifndef _LINEAR_SEARCH__
#define _LINEAR_SEARCH__

class LinearSearch {
  public:
  static unsigned int searchElement(int * arr, int size, int number) {
    bool flag = false;
    for (unsigned int count = 0; count < size; count++) {
      if (arr[count] == number) {
        flag = true;
        return (count + 1);   // returning the position value (index + 1)
      }
    }
  }
};

#endif // _LINEAR_SEARCH__