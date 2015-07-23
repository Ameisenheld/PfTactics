#include "Monster.h"

Monster::Monster(){
	Unit();
}

Monster::Monster(Ability* ab){
	Unit((Ability*)ab);		//Neudefinition des formalen Parameters "ab" ??? (vor typecast)
	Monster();
}