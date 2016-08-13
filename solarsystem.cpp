#include "solarsystem.hpp"


SolarSystem::SolarSystem() {
	star.set(rand()%500,rand()%500);
	
//	characters.push_back(Player());
//	c.push_back(star);
	for(int i =0; i < rand()%20 + 5; i++) {
		Planet pHolder;
		pHolder.load(star.getX()+star.getMass()*4, star.getY()+star.getMass()*4, star.getMass());
		planets.push_back(pHolder);
	}
	
}
void SolarSystem::addPlayer(Player &player) {
	this->player = &player;
}
void SolarSystem::draw(sf::RenderWindow &window) {
	
	star.draw(window);
	for (int i =0; i < planets.size(); i ++) {
		planets[i].draw(window);
		player->attract(planets[i]);
	}
	player->attract(star);
		player->draw(window);
	
}

void SolarSystem::tick(float &dt) {

	
	star.tick(dt);
for (int i =0; i < planets.size(); i ++) {
		planets[i].tick(dt);
	}
		player->tick(dt);
	
}
