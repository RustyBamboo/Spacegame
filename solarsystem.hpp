#ifndef SOLARSYSTEM_HPP
#define SOLARSYSTEM_HPP

#include "include.hpp"
#include <vector>
#include "star.hpp"
#include "planet.hpp"
#include "player.hpp"
#include "character.hpp"

class SolarSystem {
  private:
    Star star;
    std::vector<Planet> planets;
//    std::vector<Character*> characters;
	Player *player;
  public:
  	SolarSystem();
  	void addPlayer(Player &player);
  	void tick(float &dt);
	void draw(sf::RenderWindow &window);
	
};

#endif
