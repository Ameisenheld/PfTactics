#include "Ability.h"

Ability::Ability(short st, short ko, short de, short in, short wi, short ch)
	: strAb(st), konAb(ko), dexAb(de), intAb(in), wisAb(wi), chaAb(ch) {

	this->st = strAb / 2 - 5;
	this->ko = konAb / 2 - 5;
	this->de = dexAb / 2 - 5;
	this->in = intAb / 2 - 5;
	this->wi = wisAb / 2 - 5;
	this->ch = chaAb / 2 - 5;

	strMod = &this->st;
	konMod = &this->ko;
	dexMod = &this->de;
	intMod = &this->in;
	wisMod = &this->wi;
	chaMod = &this->ch;
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
	delete strMod;
	delete konMod;
	delete dexMod;
	delete intMod;
	delete wisMod;
	delete chaMod;
}