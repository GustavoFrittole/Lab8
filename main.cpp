#include <iostream>
#include <vector>
#include <memory>
#include "unique_ptr.h"
#include "histo.h"
int main(int argc, char **argv)
{
    //es1
    std::cout << "Es1" << std::endl;
	unique_ptr<std::string> up(new std::string("pippo :)"));
    std::cout << up->length() << std::endl;
	std::string* str = up.release();
	std::cout << *str << std::endl;
    
    //es2
    //il "mio" unique_ptr non implementa move constr., quindi immagino di dover
    //usare classi e metodi di standard lib
    std::cout << "Es2" << std::endl;
    std::unique_ptr<std::vector<int>> up1 = std::make_unique<std::vector<int>>(10);
    unique_ptr<std::vector<int>> up2( new std::vector<int>(10) );
    for(int i = 0; i < up1->size(); i++)
        (*up1)[i] = i;
    up1->push_back(10);
    up1->push_back(11);
    up1->push_back(12);
    up1->push_back(13);
    for(int i = 0; i < up1->size(); i++)
        std::cout << (*up1)[i] << " ";
    std::cout << std::endl;
    //es 3
    //usando una mappa implementata con un albero bilanciato ("overkill")
    //funziona male per testi che non siano molto corti.
    //far funzionare il metodo sia per testi lunghi che non richiede un po' di lavoro in piu'
    if(argc >= 2) histo::fileToHistogram(argv[1]);

	return 0;
}
