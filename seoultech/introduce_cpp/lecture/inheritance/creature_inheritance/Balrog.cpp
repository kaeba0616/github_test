#include<iostream>
#include"Balrog.h"

namespace role_playing{
  string Balrog::getSpecies(){
    return "Balrog";
  }

  int Balrog::getDamage(){
    int damage =getDamage();
    int damage2 = (rand() % strength) +1;
    cout<<"Balrog speed attack inflicts "<<damage2
        << "addtitional damage points!"<<"\n";
    damage += damage2;

    return damage;
  }
}