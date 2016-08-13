#ifndef UNIVERSE_HPP
#define UNIVERSE_HPP

#include "include.hpp"
#include <iostream>
#include "solarsystem.hpp"
#include "player.hpp"

class Universe  {
	private:
		sf::View view;
		Player player;
		std::vector<SolarSystem> chunks;
	public:
		Universe();
		void load();
		void tick(float &dt);
		void draw(sf::RenderWindow &window);
};

#endif
