#ifndef MONSTER_H
#define MONSTER_H

//Base Template for Monsters
//Monsters have basic abilities a CR and Hit-Dice

#include "Unit.h"

class Monster : Unit{
public:
	short CR;
	short HitDice;
};

#endif