#include "Unit.h"
#include <iostream>

Unit::Unit()
	: Prop(){

}

Unit::Unit(Ability* ab)
	: Unit(){

	ability = ab;
	skills = new Skills(ability);
}

Unit::~Unit(){
	//delete ability;		//TODO: is a problem cause ability might be zero??
}

void Unit::updateStats(){
	Prop::updateStats();
	for (auto it = activeEffects.begin(); it != activeEffects.end(); ++it){
		switch (it->affectedStat){
		case unspecified:
		case strBonus:
		case konBonus:
		case dexBonus:
		case intBonus:
		case wisBonus:
		case chaBonus:
		case acBonus:
		case attackBonus:
		case fortBonus:
		case willBonus:
		case refBonus:
		case skillBonus:
		case damageBonus:
		case speedBonus:	break;
		}
	}
	//std::cout << skills->bluff->classSkill << std::endl;
}