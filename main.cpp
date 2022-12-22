#include <iostream>
#include "unique_ptr.h"
int main()
{
	unique_ptr<char> up( new char{'y'} );
	
	char* c = up.release();
	
	std::cout << *c;
	
	return 0;
}
