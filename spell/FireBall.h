#ifndef FIRE_BALL_H
#define FIRE_BALL_H

#include "Spell.h"
#include "SpellBook.h"

class SpellBook;

class FireBall : public Spell {
    public:
        FireBall(int actionPoints, int cost, SpellBook* magicBook);
        virtual ~FireBall();
        void action(Unit* target, double SpellPower);
};

#endif // FIRE_BALL_H
