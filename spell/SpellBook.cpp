#include "SpellBook.h"

SpellBook::SpellBook() {
    magicBook = this;
    spellsMap = {
            {fireball, new FireBall(30,10, magicBook)},
            {heal, new Heal(10,10, magicBook)}
    };
}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook*) {}

SpellBook* SpellBook::Instance() {
    if ( !magicBook ) {
        magicBook = new SpellBook();
    }

    return magicBook;
}

Spell* SpellBook::getSpell(spells spell) {
    return this->spellsMap.at(spell);
}

SpellBook* SpellBook::magicBook = nullptr;