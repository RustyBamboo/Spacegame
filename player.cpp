#include "player.hpp"

Player::Player() {
	x = 0;
	y = 0;
    shape.setSize({20, 20});
    shape.setFillColor(sf::Color::Cyan);
}

void Player::tick(float &dt) {
    ax = 0;
    ay = 0;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        ax = -0.0001;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        ax = 0.0001;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        ay = -0.0001;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        ay = 0.0001;
    }
     else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        vx = 0;
        vy = 0;
    }
    
    vx += ax;
    vy += ay;
    x+=vx;
    y+=vy;
    
    shape.setPosition({x,y});
}

void Player::draw(sf::RenderWindow &window) {
	
	window.draw(shape);
	
}

void Player::attract(Celestial &cel) {
	

	float dx = x-cel.getX();
	float dy = y-cel.getY();
	float d = sqrt(dx*dx + dy *dy);
	
	
	float aa = 0.01 * cel.getMass() / (d*d);
	
	
	vx += aa * (-dx/d);
	vy += aa * (-dy/d);
	
//	std::cout<<aa<<std::endl;
	
}
