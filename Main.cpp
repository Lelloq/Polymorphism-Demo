#include<iostream>
#include<string>
#include <SFML/Graphics.hpp>
#include "BadNPC.h"
#include "ControllablePlayer.h"
#include "DestructableWall.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1280, 720, 32), "Polymorphic Lab Book Coursework Gary"); //Draw an SFML window.

	const float f_FPS = 60.0f; //The desired FPS. (The number of updates each second).
	bool b_redraw = true;      //Do I redraw everything on the screen?

	window.setFramerateLimit(f_FPS);
	sf::Clock clock;

	DestructableWall dWall;
	ControllablePlayer plr;
	BadNPC npc;

	while (window.isOpen())
	{
		//Wait until 1/60th of a second has passed, then update everything.
		if (clock.getElapsedTime().asSeconds() >= 1.0f / f_FPS)
		{
			b_redraw = true; //We're ready to redraw everything
			npc.move(sf::Vector2f(1,1));
			clock.restart();
		}
		//Check if the window is open or closed.
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if(event.type == sf::Event::KeyPressed)
			{
				plr.movePlayer(event.key.code);
			}
		}

		if(plr.getPlrHitBox().intersects(dWall.getWallBound()) && dWall.getHealth() > 0)
		{
			std::cout << "hit wall" << std::endl;
			plr.dealDamage(&plr, &dWall);
			std::cout << dWall.getHealth();
		}

		//Draw stuff if ready
		if (b_redraw)
		{
			b_redraw = false;
			window.clear();
			window.draw(plr);
			window.draw(npc);
			if(dWall.getHealth() > 0)
			{
				window.draw(dWall);
			}
			window.display();
		}
	}

	return 0;
}
