#include "Wizard.h"

Wizard::Wizard(const char* title, int hitPoints, int damage, int mana)
    : SpellCaster(title, hitPoints, damage, mana) {
    this->magicAbility = new WizardAbility(this, fireball);
}

Wizard::~Wizard() {}
