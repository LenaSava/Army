#ifndef ARMY_WARLOCKABILITY_H
#define ARMY_WARLOCKABILITY_H

#include "MagicAbility.h"
#include "../unit/Demon.h"

class WarlockAbility : public MagicAbility {
public:
    WarlockAbility(SpellCaster* owner, spells spell);
    virtual ~WarlockAbility();

    virtual void cast(Unit* enemy);

//    Demon* getDemon(demons de);


};


#endif //ARMY_WARLOCKABILITY_H
