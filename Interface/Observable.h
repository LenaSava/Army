//
// Created by LenkaSava on 18.09.18.
//

#ifndef ARMY_OBSERVABLE_H
#define ARMY_OBSERVABLE_H

#include <iostream>
#include <set>
#include "Observer.h"
#include "../exceptions.h"

class Observer;

class Observable {
protected:
    std::set<Observer*> observers;

public:
    Observable();
    ~Observable();

    const std::set<Observer*>& getObservers() const;

    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    virtual void notify() = 0;
};

#endif //ARMY_OBSERVABLE_H
