#include "Prop.h"


Prop::Prop(){

}

//enum BonusEffect { unspecified, strBonus, konBonus, dexBonus, intBonus, wisBonus, chaBonus, acBonus, attackBonus, fortBonus, willBonus, refBonus, skillBonus, damageBonus, speedBonus };
//enum BonusType { typeless, alchemical, armor, circumstance, competence, deflection, dodge, enhancement, inherent, insight, luck, morale, naturalArmor, profane, racial, resistance, sacred, shield, size, trait };

void Prop::updateStats(){		//TODO make this work without 10 years runtime
	for (auto it = activeEffects.begin(); it != activeEffects.end(); ++it){
		switch (it->affectedStat){
		case unspecified: 
		case strBonus:
		case konBonus:
		case dexBonus:
		case intBonus:
		case wisBonus:
		case chaBonus:	break;	//all upper bonuses are only used by specific props
		case acBonus:
		case attackBonus:
		case fortBonus:
		case willBonus:
		case refBonus:
		case skillBonus:
		case damageBonus:
		case speedBonus:
		}
	}
}