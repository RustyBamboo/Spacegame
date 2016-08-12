#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <vector>
#include "screens.hpp"

int main() {
  srand(time(NULL));
  std::vector<cScreen *> Screens;
  int screen = 0;
  sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

  screen_0 s0;
  Screens.push_back(&s0);
  
  screen_1 s1;
  Screens.push_back(&s1);

  while (screen >= 0) {

    screen = Screens[screen]->Run(window);
  }

  return 0;
}
