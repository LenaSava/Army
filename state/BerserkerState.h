#ifndef BERSERKER_STATE_H
#define BERSERKER_STATE_H

#include <iostream>
#include "../exceptions.h"
#include "State.h"

class BerserkerState : public State {
protected:
    const char* title;
    int hitPoints;
    int hitPointsLimit;
    int damage;

    void _takeDamage(int dmg);

public:
    BerserkerState(const char* title, int hitPoints, int damage);
    virtual ~BerserkerState();

    void ensureIsAlive();

    const char* getTitle() const;
    int getHitPoints() const;
    int getHitPointsLimit() const;
    int getDamage() const;

    void addHitPoints(int hp);
    void takeDamage(int dmg);
    void takeMagicDamage(int dmg);

};

#endif // BERSERKER_STATE_H