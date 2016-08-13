#ifndef SOLARSYSTEM_HPP
#define SOLARSYSTEM_HPP

#include "include.hpp"
#include <vector>
#include "star.hpp"
#include "planet.hpp"

class SolarSystem {
  private:
    Star star;
    std::vector<Planet> planets;
  public:
  	SolarSystem();
  	void tick(float &dt);
	void draw(sf::RenderWindow &window);
	
};

#endif
