#include "Hero.h"

Hero::Hero(){
	Unit();
}

Hero::Hero(Ability* ab){
	Unit((Ability*)ab);		//Neudefinition des formalen Parameters "ab" ??? (vor typecast)
	Hero();
}

void Hero::updateStats(){
	Unit::updateStats();
}