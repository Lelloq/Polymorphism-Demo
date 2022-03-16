#pragma once
#include "GameObject.h"

class Player : public GameObject
{
public:
	virtual void movePlayer(sf::Keyboard::Key keycode) = 0;
};