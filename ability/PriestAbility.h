#ifndef PRIEST_ABILITY_H
#define PRIEST_ABILITY_H

#include "MagicAbility.h"
#include "MagicState.h"

class PriestAbility : public MagicAbility {
public:
    PriestAbility(SpellCaster* owner, spells spell);
    virtual ~PriestAbility();

    virtual void cast(Unit* enemy);
};

#endif // PRIEST_ABILITY_H