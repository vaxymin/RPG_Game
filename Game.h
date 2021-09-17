//
// Created by Professional on 17.09.2021.
//
#include<iostream>
using namespace std;
#include "Character.h"
#include "Fight.h"
#ifndef RPG_GAME_GAME_H
#define RPG_GAME_GAME_H


class Game {
public:
Game();
    void mainMenu();
    bool is playing() const;

};

private:
    int option;
    bool playing;
    Charachter charachter;
    void startMenu();



#endif //RPG_GAME_GAME_H
