//
// Created by Professional on 17.09.2021.
//
#include <iostream>
using namespace std;
#include "Character.h"
#include "Fight.h"
#ifndef RPG_GAME_GAME_H
#define RPG_GAME_GAME_H
class Game {
public:
    //Constructor
    Game();
    //Functions
    void mainMenu();
    bool isPlaying() const;

    //Fields
private:
    int option; // to navigate in Menus
    bool playing; // to check if player is playing the game?
    Character character;
    void startMenu();

};

#endif //RPG_GAME_GAME_H
