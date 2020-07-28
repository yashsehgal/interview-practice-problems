//
// Created by Y A S H  S E H G A L on 19-07-2020.
//

#ifndef INTERVIEW_PRACTICE_PROBLEMS_SEARCHTEXTINDATAFILE_H
#define INTERVIEW_PRACTICE_PROBLEMS_SEARCHTEXTINDATAFILE_H
#define None '\0'

#include <fstream>
#include <iostream>

class SearchTextInDatafile {
public:
    static bool searchText(const char * BufferString) {
        std::ifstream openFile;
        openFile.open("sample-file.txt");
        // checking if the file is open or not
        if (!openFile) std::cout << "file is unable to open" << std::endl;
        else while (openFile.eof()) {
            if (openFile.read((char *)&BufferString, sizeof(BufferString))) return true;
        }
        return false;
    }
};

#endif //INTERVIEW_PRACTICE_PROBLEMS_SEARCHTEXTINDATAFILE_H
