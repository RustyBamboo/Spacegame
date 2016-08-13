#include "character.hpp"

Character::Character() {
	
}

void Character::draw(sf::RenderWindow &window) {
	window.draw(shape);
}

void Character::tick(float &dt) {
	vx += ax;
	vy += ay;
	x += vx;
	y += vy;
}
