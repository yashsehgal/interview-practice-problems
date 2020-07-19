//
// Created by Y A S H  S E H G A L on 19-07-2020.
//

#ifndef INTERVIEW_PRACTICE_PROBLEMS_BINARYSEARCH_H
#define INTERVIEW_PRACTICE_PROBLEMS_BINARYSEARCH_H

#include <iostream>

class BinarySearch {
public:
    static unsigned int searchElement(const int * arr, const int size, const int number) {
        unsigned int low = 0;
        unsigned int high = size - 1;
        unsigned int mid = (low + high) / 2;
        bool flag = false;
        if (arr[mid] == number) {
            flag = true;
            return (mid + 1);
        } else {
            if (arr[mid] > number) high = mid - 1;
            else if (arr[mid] < number) low = mid + 1;
            for (unsigned int count = low; count <= high; count++) {
                if (arr[count] == number) {
                    flag = true;
                    return (count + 1);
                }
            }
        }
        if (flag == false) std::cout << "the element is not available in the list! " << std::endl;
    }
};

#endif //INTERVIEW_PRACTICE_PROBLEMS_BINARYSEARCH_H
