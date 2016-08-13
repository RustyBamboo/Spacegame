#ifndef CSCREENS_HPP
#define CSCREENS_HPP

#include <SFML/Graphics.hpp>

class cScreen
{
public :
    virtual int Run (sf::RenderWindow &window) = 0;
};
#endif
