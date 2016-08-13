#include "celestial.hpp"


float Celestial::getX() { return x; }
float Celestial::getY() { return y; }
int Celestial::getMass() { return mass; }

float Celestial::getDistance(Celestial *cel) { 
//	std::cout<<x<<std::endl;
	float dx = getDistanceX(cel);
	float dy = getDistanceY(cel);
//	std::cout<<dx<<std::endl;
	float dd = dx*dx + dy*dy;

	return std::sqrt(dd); 
 }

float Celestial::getDistanceX(Celestial *cel) { return x - cel->getX(); }

float Celestial::getDistanceY(Celestial *cel) { return y - cel->getY(); }

void Celestial::draw(sf::RenderWindow &window){}
void Celestial::tick(float &dt) {}
