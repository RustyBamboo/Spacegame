#include "universe.hpp"

Universe::Universe() {}

void Universe::load() {
	SolarSystem testSystem;
	testSystem.addPlayer(player);
	chunks.push_back(testSystem);
}

void Universe::tick(float &dt) {
	chunks[0].tick(dt);
}

void Universe::draw(sf::RenderWindow &window) {
	view.setCenter(player.getX(), player.getY());
	window.setView(view);
	chunks[0].draw(window);
}
