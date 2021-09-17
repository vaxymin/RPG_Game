//
// Created by Professional on 17.09.2021.
//

#include "Character.h"

Character::Character() {
    name = "Player";
    maxHP = 10;
    HP  = maxHP;
    atk = 2;
    exp = 0;
    level =1;
    //item = new Item();
    //arrItems=;
}

void Character::initialize(string name){
    this->name=name;
    maxHP = 10;
    HP  = maxHP;
    atk = 2;
    exp = 0;
    level =1;
};

string Character::toStringCharacter(){
    string string1;


    string1 = "Name: "+name+"\n"+"HP: "+ to_string(HP)+"/"+ to_string(maxHP)+"\n"
              +"Atk: "+ to_string(atk)+"\n"+ "Exp: "+ to_string(exp)+"\n" +"Level "+ to_string(level)+"\n";


    string string2;
    string2 = "Inventory: \n";
    for (int i = 0; i < 3; i++) {
        if (arrItems[i].getAtk()!=0) {
            string2 += arrItems[i].getName() + " atk:" + to_string(arrItems[i].getAtk()) + "\n";
        }
    }
    //If item is not in inventory, do not display it.

    return (string1+string2);
};

void Character::gainExp(int exp){
    this->exp = this->exp+exp;
    //cout<<"This exp: "<< this->exp;
    levelUp();

};

void Character::levelUp(){
    if (exp>=level*10){
        level=level+1;
        exp=0;
        maxHP=maxHP+5;
        HP=maxHP;
        atk = atk+1;
    }
}

void Character::receiveItem(Item item){
    int worst_id=0;

    for (int i = 0; i < 2; i++) {
        if(arrItems[worst_id].getAtk()>arrItems[i+1].getAtk()){
            worst_id=i+1;
        }
    }
    if (arrItems[worst_id].getAtk()>item.getAtk()){
        //cout<<"Item was not replaced";
        return;
    }
    arrItems[worst_id] = item;
    //cout<<"";
    cout<<"Item WAS replaced";

}


int Character::getExp() const {
    return exp;
}

void Character::setExp(int exp) {
    Character::exp = exp;
};
