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

    return damage;
  }
  
  string Creature::getSpecies(){
    return "Unknown";
  }
}