#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "include.hpp"
#include "character.hpp"
#include "celestial.hpp"

class Player : public Character {
	public:
		Player();
		virtual void tick(float &df);
		virtual void draw(sf::RenderWindow &window);
		void attract(Celestial &cel);
};

#endif
