#ifndef BALROG_H
#define BALROG_H

#include<string>

namespace role_playing{
  class Balrog : public Demon{
    private:
      string getSpecies() const;
    public:
      
      int getDamage() const;
  }
}