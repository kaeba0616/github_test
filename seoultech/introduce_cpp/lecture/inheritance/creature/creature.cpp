#include<iostream>
#include"creature.h"

using std::string;
using std::cout;

namespace role_playing{
  Creature::Creature() : type(0), strength(10), hitpoints(10){}
  Creature::Creature(int newType, int newStrength, int newHit){
    type = newType;
    strength = newStrength;
    hitpoints = newHit;
  }
  
  void Creature::setType(int newType){
    type = newType;
  }

  void Creature::setStrength(int newStrength){
    strength = newStrength;
  }
  
  void Creature::setHitpoints(int newHit){
    hitpoints = newHit;
  }

  int Creature::getType(){
    return type;
  }

  int Creature::getStrength(){
    return strength;
  }
  int Creature::getHitpoints(){
    return hitpoints;
  }

  int getDamage(){
    int damage;
    damage = (rand()% strength) +1;
    cout <<getSpecies() <<" attacks for" << damage
        << " points!"<<"\n";

    if((type==2) || (type ==1))
      if((rand()%100) <5){
        damage += 50;
        cout << "Demonic attack inflicts 50 "
            << " additional damage points!"<<"\n"; 
      }

    if(type ==3){
      if((rand()%10) ==0){
        cout << "Magical attack inflicts " <<damage
            << " additional damage points!" <<"\n";
        damage *=2;
      }
    }
    
    if(type == 2){
     int damage2 = (rand() % strength)+1;
     cout << "Balrog speed attack inflicts " <<damage2 
          << "addtitional damage points!" <<"\n";
          damage += damage2;  
    }
    return damage;

  }
  
  string Creature::getSpecies(){
    switch(type)
    {
      case 0: return "Human";
      case 1: return "Cyberdemon";
      case 2: return "Balrog";
      case 3: return "Elf";
    }
    return "Unknown";
  }
}