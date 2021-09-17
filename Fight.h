//
// Created by Professional on 17.09.2021.
//

#ifndef RPG_GAME_FIGHT_H
#define RPG_GAME_FIGHT_H
#include "Character.h"
#include "Enemy.h"
#include <iostream>
using namespace std;

class Fight {
public:
    Fight();
    void fightEventStart(Character character);
private:
    Character character;
    Enemy *enemy;

};

#endif //RPG_GAME_FIGHT_H
