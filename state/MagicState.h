#ifndef MAGIC_STATE_H
#define MAGIC_STATE_H

#include <iostream>
#include "../exceptions.h"

class MagicState {
    protected:
        int mana;
        int manaLimit;
//        bool isNecromancer = false;

    public:
        MagicState(int mana);
        virtual ~MagicState();

        int getMana() const;
        int getManaLimit() const;

        void addMana(int extra);
        void spendMana(int cost);

//        bool getIsNecromancer();
};

#endif // MAGIC_STATE_H
