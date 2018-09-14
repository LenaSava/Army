#include <iostream>
#include "Army.h"


int main() {
    
    
    Soldier* soldier = new Soldier("Soldier", 150, 20);
    Rogue* razboynik = new Rogue("Razboynik", 100, 5);
    Wizard* gendalf = new Wizard("Gendalf", 100, 15, 40);
    Berserker* viking = new Berserker("Viking", 100, 20);
    Vampire* vlad = new Vampire("Vampire", 150, 30);
    Werewolf* werewolf = new Werewolf("Werewolf", 150, 30);
    Healer* healer = new Healer("Healer", 150, 30, 30);
    Priest* priest = new Priest("Priest", 120, 20, 70);
    Warlock* warlock = new Warlock("Warlock", 120, 20, 150);


    soldier->PrintDescription();
    razboynik->PrintDescription();
    gendalf->PrintDescription();
    viking->PrintDescription();
    vlad->PrintDescription();
    werewolf->PrintDescription();
    healer->PrintDescription();
    priest->PrintDescription();
    warlock->PrintDescription();



    priest->changeSpell(fireball);
    warlock->cast(vlad);
    priest->cast(werewolf);



    werewolf->PrintDescription();
    priest->PrintDescription();
    vlad->PrintDescription();

    priest->meditation();
    warlock->cast(priest);

    priest->PrintDescription();


    delete soldier;
    delete razboynik;
    delete gendalf;
    delete viking;
    delete vlad;
    delete werewolf;
    delete healer;
//    delete priest;
//    delete warlock;

    return 0;
}

