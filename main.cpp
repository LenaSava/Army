#include <iostream>
#include "Army.h"


int main() {
    
    
    Soldier* soldier = new Soldier("Soldier", 150, 20);
    Rogue* razboynik = new Rogue("Razboynik", 100, 5);
    Wizard* gendalf = new Wizard("Gendalf", 100, 15, 40);
    Berserker* viking = new Berserker("Viking", 100, 20);
    Vampire* vlad = new Vampire("Vampire", 100, 30);
    Werewolf* werewolf = new Werewolf("Werewolf", 100, 30);
    Healer* healer = new Healer("Healer", 100, 30, 30);
    Priest* priest = new Priest("Priest", 100, 20, 70);
    Warlock* warlock = new Warlock("Warlock", 100, 20, 150);
    Necromancer* necromancer = new Necromancer("Necromancer", 100, 25, 120);



    soldier->PrintDescription();
    razboynik->PrintDescription();
    gendalf->PrintDescription();
    viking->PrintDescription();
    vlad->PrintDescription();
    werewolf->PrintDescription();
    healer->PrintDescription();
    priest->PrintDescription();
    warlock->PrintDescription();
    necromancer->PrintDescription();



    priest->changeSpell(fireball);
    priest->cast(werewolf);
	priest->cast(vlad);
    priest->cast(necromancer);
    priest->meditation();
 //   priest->meditation();
    priest->changeSpell(heal);
    priest->cast(necromancer);
    Demon* demon1 = warlock->evokeDemon();
    Demon* demon2 = warlock->evokeDemon();
    demon2->attack(vlad);
    demon1->attack(vlad);
    warlock->attack(soldier);
    warlock->cast(soldier);
    soldier->attack(demon1);
//    necromancer->attack(soldier);







    soldier->PrintDescription();
    demon1->PrintDescription();



    delete soldier;
    delete razboynik;
    delete gendalf;
    delete viking;
    delete vlad;
    delete werewolf;
    delete healer;
    delete warlock;
    delete necromancer;
    return 0;
}

