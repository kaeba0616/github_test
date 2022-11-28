#ifndef ELF_H
#define ELF_H

#include<string>

namespace role_playing{
  class Elf : public Creature{
    private:
      string getSpecies() const;
    public:
      int getDamage();
  };
}

#endif