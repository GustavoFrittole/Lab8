#include "histo.h"

void histo::fileToHistogram(char* file){
    std::string filePath{"../fileHere/"};
    filePath.append(file);
    std::ifstream ifs;
    ifs.open(filePath);
    if(ifs.bad()){
        ifs.close();
        throw std::invalid_argument("Errore in lettura file");
    }
    
    std::map<char, int> lettere;
    
    while(ifs.is_open()){
        if(ifs.eof()){
            std::cout << "Lettura terminata.\n";
            printHisto(lettere);
            return;
        }
        char c;
        ifs.get(c);
        if(std::isalpha(c)){
            ++lettere[c];
        }
    }
    throw std::invalid_argument("Errore in apertura file. \n Inserire nome file presente in cartella fileHere come argomento da linea di comando.");
}

void histo::printHisto(std::map<char, int> &lettere){
    std::cout << "Istogramma lettere:\n";
    for(const std::pair<char, int> & l: lettere){
        std::cout << l.first << "\t";
        for(int i = 0; i < l.second; i++) std::cout << '#';
        std::cout << std::endl;
    }
}