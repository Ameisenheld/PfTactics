#ifndef PROP_H
#define PROP_H

//Base Class-Template for every object that can be placed on the map
//for combat ready objects see: Unit.
//For normal (and immovable) objects see: Furniture.
//Pro tip: animated objects are creatures: Unit -> Monster

#include <string>
#include "StatBonus.h"
#include <vector>

class Prop{
public:
	short AC;
	short touchAC;
	short flatAC;
	short spellResistance;
	short fortitude;
	short reflex;
	short will;
	int HP;
	int damage;
	int nonlethalDamage;
	short DR;
	std::string name;
	long ID;
	std::vector<StatBonus> activeEffects;
private:
	//Prop();		//Don't create this... PLEASE
};

#endif