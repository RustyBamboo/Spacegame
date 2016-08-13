#include "planet.hpp"


Planet::Planet() {}

void Planet::load(Star &star) {
	
	float x = star.getX() + (rand()%400 - 200);
	float y = star.getY() + (rand()%400 - 200);
	
	this->x = x;
	this->y = y;
	
	shape.setRadius(rand()%20 + 10);
	shape.setPosition({x,y});
	
	this->mass = rand()%5 + 1;
	//rand x,y
	//vx,vy 
	//ax, ay = v^2/r
}

void Planet::draw(sf::RenderWindow &window) {
	window.draw(shape);
}
