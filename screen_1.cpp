#include "screen_1.hpp"

screen_1::screen_1(void) { universe.load(); }

int screen_1::Run(sf::RenderWindow &App) {
    float dt;
    sf::Event Event;
    bool Running = true;

    while (Running) {
        // Verifying events
        while (App.pollEvent(Event)) {
            // Window closed
            if (Event.type == sf::Event::Closed) {
                return (-1);
            }
            if (Event.type == sf::Event::KeyPressed) {
                switch (Event.key.code) {
                case sf::Keyboard::Escape:
                    return (0);
                }
            }
        }

        universe.tick(dt);
        // Clearing screen
        App.clear(sf::Color(0, 0, 0, 0));
        // Drawing
        universe.draw(App);
        App.display();
    }

    // Never reaching this point normally, but just in case, exit the application
    return -1;
}
