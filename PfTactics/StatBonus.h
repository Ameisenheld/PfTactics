#ifndef STATBONUS_H
#define STATBONUS_H

enum BonusEffect { unspecified, strBonus, konBonus, dexBonus, intBonus, wisBonus, chaBonus, acBonus, attackBonus, fortBonus, willBonus, refBonus, skillBonus, damageBonus, speedBonus };
enum BonusType { typeless, alchemical, armor, circumstance, competence, deflection, dodge, enhancement, inherent, insight, luck, morale, naturalArmor, profane, racial, resistance, sacred, shield, size, trait };
//stacking types: circumstance (if other source), 


class StatBonus{
public:
	StatBonus(long*);
	StatBonus(long*, BonusEffect, BonusType, short);
	BonusEffect affectedStat;
	BonusType bonusType;
	short bonusValue;
	long* sourceID;
	long duration;
};

#endif