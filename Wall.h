#pragma once
#include "GameObject.h"

class Wall : public GameObject
{
protected:
	bool canDestroy;
public:
	virtual sf::FloatRect getWallBound() = 0;
};