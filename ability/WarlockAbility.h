#ifndef ARMY_WARLOCKABILITY_H
#define ARMY_WARLOCKABILITY_H

#include "MagicAbility.h"
#include "../unit/Demon.h"
//#include <map>
//
//class Demon;
//
//typedef enum{
//    anku,
//    aheron
//} demons;

class WarlockAbility : public MagicAbility {
protected:
//    std::map<demons, Demon*> demonMap;
public:
    WarlockAbility(SpellCaster* owner, spells spell);
    virtual ~WarlockAbility();

    virtual void cast(Unit* enemy);

//    Demon* getDemon(demons de);


};


#endif //ARMY_WARLOCKABILITY_H
