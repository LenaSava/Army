#include "Berserker.h"

Berserker::Berserker(const char* title, int hitPoints, int damage):
        Unit(title, hitPoints, damage) {
            this->ability = new DefaultAbility(this);
            this->state = new BerserkerState(title, hitPoints, damage);
            std::cout << "Berserker constructor" << std::endl;

}

Berserker::~Berserker() {
    std::cout << "Berserker destructor" << std::endl;
}
