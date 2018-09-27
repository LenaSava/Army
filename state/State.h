#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../exceptions.h"

class State {
    protected:
        const char* title;
        int hitPoints;
        int hitPointsLimit;
        int damage;

        bool isVampire = false;
        bool isWolf = false;
        bool isTurnWolf = false;
        bool isNecromancer = false;

        void _takeDamage(int dmg);

    public:
        State(const char *title, int hitPoints, int damage);
        virtual ~State();

        void ensureIsAlive();

        const char* getTitle() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        void addHitPoints(int hp);
        void takeDamage(int dmg);
        void takeMagicDamage(int dmg);

        bool getIsVampire();
        bool getIsWolf();
        bool getIsTurnWolf();
        bool getIsNecromancer();

};

#endif // STATE_H
