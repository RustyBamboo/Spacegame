#ifndef PLANET_HPP
#define PLANET_HPP

#include "star.hpp"

class Planet : public Celestial {
  private:
    Planet();
  public:
    void load(Star &star);
};

#endif
