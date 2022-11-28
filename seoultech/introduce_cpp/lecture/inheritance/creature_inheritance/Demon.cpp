#include<iostream>
#include"Demon.h"

namespace role_playing{
  int Demon::getDamage(){
    int damage = getDamage();
    if((rand()%100) <5){
      damage += 50;
      cout<< "Demonic attack inflicts 50"
          << " additional damage points!" <<"\n";
    }
    return damage;
  }
}