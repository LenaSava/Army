#include <iostream>
#include "Army.h"


int main() {
    
    
    Soldier* capitanAmerika = new Soldier("CapAmerica", 50, 5);
    Rogue* razboynik = new Rogue("Razboynik", 40, 5);
    Unit* lev = new Unit("Lev", 50, 7);
    Wizard* gendalf = new Wizard("Gendalf", 70, 15, 20);
    Berserker* viking = new Berserker("Viking", 80, 20);
    Vampire* vlad = new Vampire("Vlad", 80, 20);


    capitanAmerika->PrintDescription();
    razboynik->PrintDescription();
    lev->PrintDescription();
    gendalf->PrintDescription();
    viking->PrintDescription();

    capitanAmerika->attack(viking);

    viking->PrintDescription();

    return 0;
}

