#ifndef UNIVERSE_HPP
#define UNIVERSE_HPP

class Universe {
	private:
		std::vector<SolarSystem> chunks;
		Universe();
	public:
		void load();
		void tick(float dt);
		void draw();
};

#endif
