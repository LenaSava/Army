#ifndef UNIT_H
#define UNIT_H

#include <set>
#include "../state/State.h"
#include "../ability/Ability.h"
#include "../Interface/Observable.h"
#include "../Interface/Observer.h"

class Ability;
class State;

class Unit : public Observable, public Observer {
    protected:
        State* state;
        Ability* ability;
        bool isUndead;

    public:
        int damage;
        int hitPoints;
        int hitPointsLimit;

        Unit(const char* title, int hitPoints, int damage);
        virtual ~Unit();

        void ensureIsAlive();

        const char* getTitle() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        int getDamage() const;

        void addHitPoints(int hp);
        virtual void takeDamage(int dmg);
        void takeMagicDamage(int dmg);


        virtual void attack(Unit* enemy);
        virtual void convert(Unit* enemy);
        virtual void turnMySelf();
        virtual void counterAttack(Unit* enemy);

        bool getIsVampire();
        bool getIsWolf();
        bool getIsTurnWolf();
        bool getIsUnDead();

        virtual void changeAbility(Ability* newAbility);
        virtual void changeState(State* newState);

        virtual void sendNotification();
        virtual void notify();


        void PrintDescription();
};


#endif // UNIT_H
