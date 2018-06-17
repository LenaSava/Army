#include <iostream>
#include "Army.h"


int main() {
    
    
    Soldier* capitanAmerika = new Soldier("CapAmerica", 100, 25);
    Rogue* razboynik = new Rogue("Razboynik", 100, 5);
    Unit* lev = new Unit("Lev", 100, 7);
    Wizard* gendalf = new Wizard("Gendalf", 100, 15, 100);
    Berserker* viking = new Berserker("Viking", 100, 20);
    Vampire* vlad = new Vampire("Vlad", 150, 30);
    Werewolf* andy = new Werewolf("Andy", 150, 30);


    capitanAmerika->PrintDescription();
    razboynik->PrintDescription();
    lev->PrintDescription();
    gendalf->PrintDescription();
    viking->PrintDescription();
    vlad->PrintDescription();
    andy->PrintDescription();

//    razboynik->attack(vlad);

    andy->convert(lev);

    gendalf->attack(vlad);
    gendalf->cast(lev);




    vlad->PrintDescription();
    lev->PrintDescription();
    gendalf->PrintDescription();


    return 0;
}

