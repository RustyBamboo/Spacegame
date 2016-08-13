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
		int getMass();
		float getDistance(Celestial *cel);
		float getDistanceX(Celestial *cel);
		float getDistanceY(Celestial *cel);
};


#endif
