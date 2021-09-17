//
// Created by Professional on 17.09.2021.
//

#include "Fight.h"

extern int countOption;

Fight::Fight() {}

void Fight::fightEventStart(Character character){
    Enemy *enemy1 = new Enemy(4, 4, 2, 1);

    int option;
    cout<<"You have encountered Enemy with: HP: "<< enemy1->getMaxHp()<<", atk: "<<enemy1->getAtk()<< endl;
    cout<<"Chose:"<<endl;
    cout<<"0: Retreat"<<endl;
    cout<<"1: Fight"<<endl;
    cin>>option; ++countOption;
    switch(option){
        case 0: return; break;
        case 1: ; break;
        default: break;
    }


};
