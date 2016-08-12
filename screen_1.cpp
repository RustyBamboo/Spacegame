#include "screen_1.hpp"


screen_1::screen_1(void)
{
	universe.load();
}

int screen_1::Run(sf::RenderWindow &App)
{
    sf::Event Event;
    bool Running = true;

    while (Running)
    {
        //Verifying events
        while (App.pollEvent(Event))
        {
            // Window closed
            if (Event.type == sf::Event::Closed)
            {
                return (-1);
            }
            //Key pressed
            if (Event.type == sf::Event::KeyPressed)
            {
                switch (Event.key.code)
                {
                case sf::Keyboard::Escape:
                    return (0);
                    break;
                case sf::Keyboard::Up:
                    posy -= movement_step;
                    break;
                case sf::Keyboard::Down:
                    posy += movement_step;
                    break;
                case sf::Keyboard::Left:
                    posx -= movement_step;
                    break;
                case sf::Keyboard::Right:
                    posx += movement_step;
                    break;
                default:
                    break;
                }
            }
        }

        //Updating
        if (posx>630)
            posx = 630;
        if (posx<0)
            posx = 0;
        if (posy>470)
            posy = 470;
        if (posy<0)
            posy = 0;
        Rectangle.setPosition({ posx, posy });

        //Clearing screen
        App.clear(sf::Color(0, 0, 0, 0));
        //Drawing
        App.draw(Rectangle);
        App.display();
    }

    //Never reaching this point normally, but just in case, exit the application
    return -1;
}
