#ifndef ARMY_NECROABILITY_H
#define ARMY_NECROABILITY_H

#include "MagicAbility.h"


class NecroAbility : public MagicAbility {
public:
    NecroAbility(SpellCaster* owner, spells spell);
    virtual ~NecroAbility();

    void cast(Unit* enemy);
};


#endif //ARMY_NECROABILITY_H
