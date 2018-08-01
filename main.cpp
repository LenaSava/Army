#include <iostream>
#include "Army.h"


int main() {
    
    
    Soldier* capitanAmerika = new Soldier("CapAmerica", 100, 25);
    Rogue* razboynik = new Rogue("Razboynik", 100, 5);
    Unit* lev = new Unit("Lev", 100, 7);
    Wizard* gendalf = new Wizard("Gendalf", 100, 15, 40);
    Berserker* viking = new Berserker("Viking", 100, 20);
    Vampire* vlad = new Vampire("Vampire", 150, 30);
    Werewolf* andy = new Werewolf("Werewolf", 150, 30);


    capitanAmerika->PrintDescription();
    razboynik->PrintDescription();
    lev->PrintDescription();
    gendalf->PrintDescription();
    viking->PrintDescription();
    vlad->PrintDescription();
    andy->PrintDescription();



    gendalf->attack(andy);
    




    andy->PrintDescription();
    gendalf->PrintDescription();



    return 0;
}

