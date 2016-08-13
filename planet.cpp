#include "planet.hpp"

#include <iostream>


Planet::Planet() {}


void Planet::load(float starX, float starY, int starMass) {
	
	float x = starX + (rand()%400 - 200);
	float y = starY + (rand()%400 - 200);
	
	this->x = x;
	this->y = y;
	

	shape.setPosition({x,y});
	
	this->mass = rand()%20 + 10;
	shape.setRadius(this->mass);
	
	
	this->starX = starX;
	this->starY = starY;
	this->starMass = starMass;
//			std::cout<<this->mainStar->getX()<<std::endl;

	//rand x,y
	//vx,vy 
	//ax, ay = v^2/r
}

void Planet::tick(float &dt) {
	float dx = x - starX + mass;
	float dy = y - starY + mass;
	
	float d = sqrt(dx*dx + dy*dy);
	
	float vv = sqrt(0.01*starMass / d);

	vx = vv * (dy / d);
	vy = vv * (-dx / d);
	
//	float d = getDistance(this->star);
////	std::cout<<d<<std::endl;
//	float vv = starMass / d;
////	std::cout<<vv<<std::endl;
//	vx = vv * getDistanceX(star)/d;
//	vy = vv * getDistanceY(star)/d;
//	
	x+=vx;
	y+=vy;
	
	shape.setPosition({x,y});
}

void Planet::draw(sf::RenderWindow &window) {
	window.draw(shape);
}
