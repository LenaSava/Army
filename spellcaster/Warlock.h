#ifndef ARMY_WARLOCK_H
#define ARMY_WARLOCK_H

#include <iostream>
#include "SpellCaster.h"
#include "../spell/Lightning.h"
#include "../ability/WarlockAbility.h"
#include "../unit/Demon.h"


class Warlock : public SpellCaster {
public:
	Warlock(const char *title, int hitPoints, int damage, int mana);

	virtual ~Warlock();

//	Demon *getDemon();

//	void summonSlave();
//
//	void freeSlave();
//
//	void setSlave(Demon *demon);
//
//	Demon *demon();
};

#endif //ARMY_WARLOCK_H
