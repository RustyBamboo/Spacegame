#ifndef PLANET_HPP
#define PLANET_HPP

#include "include.hpp"
#include "star.hpp"

class Planet : public Celestial {
  private:
  	sf::CircleShape shape;
	float starX, starY, starMass;
  public:
  	Planet();
  	void tick(float &dt);
    void load(float starX, float starY, int starMass);
    void draw(sf::RenderWindow &window);
};

#endif
