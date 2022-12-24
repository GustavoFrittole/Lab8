#ifndef HISTO_H
#define HISTO_H

#include <iostream>
#include <fstream>
#include <map>
#include <cctype>

namespace histo{
    void fileToHistogram(char*);
    void printHisto(std::map<char, int> &);
}

#endif