#pragma once
#include "NPC.h"

class BadNPC : public NPC
{
private:
	sf::RectangleShape badNPCShape;
public:
	BadNPC();
	void move(sf::Vector2f movement) override;
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};