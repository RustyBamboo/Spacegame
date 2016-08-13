#ifndef CELESTIAL_HPP
#define CELESTIAL_HPP

class Celestial {
	protected:
		float x, y, vx, vy, ax, ay;
		int mass;
	public:
		float getX();
		float getY();
		float getVX();
		float getVY();
};


#endif
