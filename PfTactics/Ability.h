#ifndef ABILITY_H
#define ABILITY_H

enum Attribute{ STR, KON, DEX, INT, WIS, CHA };

class Ability{
public:
	Ability(short, short, short, short, short, short);
	~Ability();
	short* strMod;		//pointers to the abbilty score modifiers
	short* konMod;
	short* dexMod;
	short* intMod;
	short* wisMod;
	short* chaMod;
	void changeAbility(Attribute, short);	//only way to alter the scores
private:
	unsigned short strAb;	//The real abbility scores
	unsigned short konAb;
	unsigned short dexAb;
	unsigned short intAb;
	unsigned short wisAb;
	unsigned short chaAb;
	short st;			//The abbility modifiers
	short ko;
	short de;
	short in;
	short wi;
	short ch;
};

#endif