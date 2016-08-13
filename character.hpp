#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "include.hpp"
#include "celestial.hpp"

class Character : public Celestial {
	protected:
		sf::RectangleShape shape;
	public:
		Character();
		virtual void draw(sf::RenderWindow &window) = 0;
		virtual void tick(float &dt) = 0;
		
};
#endif
