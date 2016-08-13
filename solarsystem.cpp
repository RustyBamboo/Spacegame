#include "solarsystem.hpp"

Star star;

SolarSystem::SolarSystem() {
	star.set(rand()%500,rand()%500);
	for(int i =0; i < 1; i++) {
		Planet pHolder;
		pHolder.load(star.getX(), star.getY(), star.getMass());
		planets.push_back(pHolder);
	}
	
}

void SolarSystem::draw(sf::RenderWindow &window) {
	star.draw(window);
	for (int i =0; i < planets.size(); i ++) {
		planets[i].draw(window);
	}
}

void SolarSystem::tick(float &dt) {
	star.tick(dt);
for (int i =0; i < planets.size(); i ++) {
		planets[i].tick(dt);
	}
}
