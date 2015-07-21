#include "Map.h"
#include <iostream>

//  Main routine and control

long idCounter;

void main(int argc, const char* argv[]){
	//first: check for imput arguments
	for (int i = 0; i < argc; i++) {
		std::cout << "arg" << i << ": " << argv[i] << std::endl;
	}
	idCounter = 0;	//global Counter for ALL objects



	system("pause");		//Only works on windows
}