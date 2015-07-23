#include "Ability.h"

Ability::Ability(short st, short ko, short de, short in, short wi, short ch)
	: strAb(st), konAb(ko), dexAb(de), intAb(in), wisAb(wi), chaAb(ch) {

	st = strAb / 2 - 5;
	ko = konAb / 2 - 5;
	de = dexAb / 2 - 5;
	in = intAb / 2 - 5;
	wi = wisAb / 2 - 5;
	ch = chaAb / 2 - 5;

	strMod = &st;
	konMod = &ko;
	dexMod = &de;
	intMod = &in;
	wisMod = &wi;
	chaMod = &ch;
}

void Ability::changeAbility(Attribute atr, short mod){
	switch (atr){
	case STR:
		strAb += mod;	st = strAb / 2 - 5; break;
	case KON:
		konAb += mod;	ko = konAb / 2 - 5; break;
	case DEX:
		dexAb += mod;	de = dexAb / 2 - 5; break;
	case INT:
		intAb += mod;	in = intAb / 2 - 5; break;
	case WIS:
		wisAb += mod;	wi = wisAb / 2 - 5; break;
	case CHA:
		chaAb += mod;	ch = chaAb / 2 - 5; break;
	}
}

Ability::~Ability(){
	//delete strMod;
	//delete konMod;
	//delete dexMod;
	//delete intMod;
	//delete wisMod;
	//delete chaMod;
}