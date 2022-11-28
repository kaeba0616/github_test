#include<iostream>
#include"Elf.h"

namespace role_playing{
  string Elf::getSpecies(){
    return "Elf";
  }
  
  int Elf::getDamage(){

    int damage = getDamage();
    if((rand()%10) == 0){
      cout<<"Magical attack inflicts "<< damage
          << " additional damage points!"<<"\n";
     *=2;
    }
  }
  return damage;
}