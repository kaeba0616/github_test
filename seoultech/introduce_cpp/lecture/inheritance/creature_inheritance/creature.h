#ifndef CREATURE_H
#define CREATURE_H

#include<string>

namespace role_playing{
  class Creature{
    private:
      int type;
      int strength;
      int hitpoints;
      string getSpecies() const;
    public:
      Creature();
      Creature(int newtype, int newStrength, int newHit);

      void setType(int newtype);
      void setStrength(int newStrength);
      void setHitpoints(int newHit);
      int getType() const;
      int getStrength() const;
      int getHitpoints() const;

      int getDamage() const;
  };
}
#endif