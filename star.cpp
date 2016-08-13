#include "star.hpp"

Star::Star() {
	//rand x,y and mass
}

Star::Star(float x, float y) {

	
}

void Star::set(float x, float y) {
		this->x = x;
	this->y = y;
	shape.setRadius(10);
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(x,y));
	this->mass = rand()% 10 + 10;
}

void Star::tick(float &dt) {
//	std::cout<<x<<std::endl;
}

void Star::draw(sf::RenderWindow &window) {
	window.draw(shape);
}
