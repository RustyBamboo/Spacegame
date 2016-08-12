#ifndef SOLARSYSTEM_HPP
#define SOLARSYSTEM_HPP

class SolarSystem {
  private:
    Star star;
    std::vector<Planet> planets;
  public:
  	void tick();
  	void draw();
};

#endif
