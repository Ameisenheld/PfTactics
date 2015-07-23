#include "Map.h"
#include <iostream>
#include "Hero.h"

//  Main routine and control

long idCounter;

void main(int argc, const char* argv[]){
	//first: check for imput arguments
	for (int i = 0; i < argc; i++) {
		std::cout << "arg" << i << ": " << argv[i] << std::endl;
	}
	idCounter = 0;	//global Counter for ALL objects
	Map map(10, 10);
	Hero* fighter = new Hero(new Ability(18, 12, 16, 7, 11, 13));
	fighter->updateStats();

	map.addCreature(1, 1, fighter);
	map.addCreature(2, 1, fighter);
	map.printMap();

	system("pause");		//Only works on windows
}