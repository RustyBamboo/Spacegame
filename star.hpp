#ifndef STAR_HPP
#define STAR_HPP

#include "include.hpp"
#include "celestial.hpp"

class Star : public Celestial {
	private:
		sf::CircleShape shape;
	public:
		Star();
		Star(float x, float y);
		
		void draw(sf::RenderWindow &window);
		
};

#endif
