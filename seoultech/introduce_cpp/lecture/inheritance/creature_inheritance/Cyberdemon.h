#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include<string>

namespace role_playing{
  class CyberDemon : public Demon{
    private:
      string getSpecies() const;
    public:
      int getDamage() const;
  };
}

#endif