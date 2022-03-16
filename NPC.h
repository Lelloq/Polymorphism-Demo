#pragma once
#include "GameObject.h"

class NPC : public GameObject
{
public:
	virtual void move(sf::Vector2f movement) = 0;
};