#include "BadNPC.h"

BadNPC::BadNPC()
{
	badNPCShape.setSize(sf::Vector2f(20, 20));
	badNPCShape.setOrigin(sf::Vector2f(10, 10));
	badNPCShape.setPosition(sf::Vector2f(100, 100));

	this->setMoveSpeed(1);
	this->setHealth(100);
	this->setAttackDmg(5);
}

void BadNPC::move(sf::Vector2f movement)
{
	badNPCShape.move(movement.x * this->fmoveSpeed, movement.y * this->fmoveSpeed);
}

void BadNPC::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(badNPCShape, states);
}