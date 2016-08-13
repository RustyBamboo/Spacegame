#include "universe.hpp"

Universe::Universe() {}

void Universe::load() {
	SolarSystem testSystem;
	chunks.push_back(testSystem);
}

void Universe::tick(float &dt) {
	chunks[0].tick(dt);
}

void Universe::draw(sf::RenderWindow &window) {
	chunks[0].draw(window);
}
