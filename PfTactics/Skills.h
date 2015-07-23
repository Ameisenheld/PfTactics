#ifndef SKILLS_H
#define SKILLS_H

//Controlling class for all skills, each Unit should use this to manage their skills.

#include "Class.h"
#include "Skill.h"
#include "Ability.h"

class Skills{
public:
	Skills(Ability*);
	Skill* acrobatics;
	Skill* appraise;
	Skill* bluff;
	Skill* climb;
	Skill* craft;
	Skill* diplomacy;
	Skill* disableDevice;
	Skill* disguise;
	Skill* escapeArtist;
	Skill* fly;
	Skill* handleAnimal;
	Skill* heal;
	Skill* intimidate;
	Skill* knowledgeArcana;
	Skill* knowledgeDungeoneering;
	Skill* knowledgeEngineering;
	Skill* knowledgeGeography;
	Skill* knowledgeHistory;
	Skill* knowledgeLocal;
	Skill* knowledgeNature;
	Skill* knowledgeNobility;
	Skill* knowledgePlanes;
	Skill* knowledgeReligion;
	Skill* linguistics;
	Skill* perception;
	Skill* perform;
	Skill* profession;
	Skill* ride;
	Skill* senseMotive;
	Skill* sleightOfHand;
	Skill* spellcraft;
	Skill* stealth;
	Skill* survival;
	Skill* swim;
	Skill* useMagicDevice;
	void setClassSkills(ClassName);
};

#endif