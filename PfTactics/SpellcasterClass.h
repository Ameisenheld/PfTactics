#ifndef SPELLCASTERCLASS_H
#define SPELLCASTERCLASS_H

#include "Class.h"
#include "Spell.h"
#include <vector>

class SpellcasterClass : public Class{
public:
	std::vector<std::vector<Spell>> SpellsKnown;	//A list for every SpellLevel
	virtual bool isSpontaneous();
};

#endif