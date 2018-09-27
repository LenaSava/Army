#include "Demon.h"

Demon::Demon(const char *title, int hitPoints, int damage) : Soldier(title, hitPoints, damage) {
    this->ability = new DefaultAbility(this);
//    std::cout << "Demon constructor" << std::endl;
}

Demon::~Demon() {
//    std::cout << "Demon destructor" << std::endl;
}

