#ifndef PLANET_HPP
#define PLANET_HPP

#include "include.hpp"
#include "star.hpp"

class Planet : public Celestial {
  private:
  	sf::CircleShape shape;
  public:
  	Planet();
    void load(Star &star);
    void draw(sf::RenderWindow &window);
};

#endif
