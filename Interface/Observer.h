//
// Created by LenkaSava on 18.09.18.
//


#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <set>
#include "Observable.h"
#include "../exceptions.h"

class Observable;

class Observer {
protected:
    std::set<Observable*> observables;

public:
    Observer();
    ~Observer();

    const std::set<Observable*>& getObservables() const;

    void addObservable(Observable* observable);
    void removeObservable(Observable* observable);
    virtual void sendNotification() = 0;
};

#endif //OBSERVER_H