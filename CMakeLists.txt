cmake_minimum_required(VERSION 3.10)
project(army)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(ability)
include_directories(spell)
include_directories(spellcaster)
include_directories(state)
include_directories(unit)

add_executable(army
    ability/Ability.cpp
    ability/Ability.h
    ability/DefaultAbility.cpp
    ability/DefaultAbility.h
    ability/MagicAbility.cpp
    ability/MagicAbility.h
    ability/RogueAbility.cpp
    ability/RogueAbility.h
    ability/VampireAbility.cpp
    ability/VampireAbility.h
        ability/WerewolfAbility.cpp
    spell/FireBall.cpp
    spell/FireBall.h
    spell/Heal.cpp
    spell/Heal.h
    spell/Spell.cpp
    spell/Spell.h
    spellcaster/SpellCaster.cpp
    spellcaster/SpellCaster.h
    spellcaster/Wizard.cpp
    spellcaster/Wizard.h
    state/BerserkerState.cpp
    state/BerserkerState.h
        state/VampireState.h
        state/VampireState.cpp
        state/MagicState.cpp
        state/WerewolfState.cpp
        state/TurnWolfState.cpp
    state/MagicState.h
    state/State.cpp
    state/State.h
    unit/Berserker.cpp
    unit/Berserker.h
    unit/Rogue.cpp
    unit/Rogue.h
    unit/Soldier.cpp
    unit/Soldier.h
    unit/Unit.cpp
    unit/Unit.h
    unit/Vampire.cpp
    unit/Vampire.h
        unit/Werewolf.cpp
        Army.h
    exceptions.h
    main.cpp src/Exlibs.cpp)
