#include "solarsystem.hpp"

SolarSystem::SolarSystem() {
	star = Star(rand()%500,rand()%500);
	for(int i =0; i < rand()%20 + 5; i++) {
		Planet pHolder;
		pHolder.load(star);
		planets.push_back(pHolder);
	}
	
}

void SolarSystem::draw(sf::RenderWindow &window) {
	star.draw(window);
	for (int i =0; i < planets.size(); i ++) {
		planets[i].draw(window);
	}
}
