#include <iostream>
#include "cScreen.hpp"

#include <SFML/Graphics.hpp>

#include "universe.hpp"

class screen_1 : public cScreen
{
private:
	Universe universe;
public:
    screen_1(void);
    virtual int Run(sf::RenderWindow &App);
};

