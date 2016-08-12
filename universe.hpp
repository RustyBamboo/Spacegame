#ifndef UNIVERSE_HPP
#define UNIVERSE_HPP

class Universe {
	private:
		std::vector<SolarSystem> chunks;
		Universe();
	public:
		void load(Player &player);
		void tick(float dt);
		void draw();
};

#endif
