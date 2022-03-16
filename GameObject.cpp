#include "GameObject.h"

void GameObject::setHealth(int health)
{
	this->ihealth = health;
}

int GameObject::getHealth()
{
	return ihealth;
}

float GameObject::getAttackDmg()
{
	return fattackDmg;
}

void GameObject::setAttackDmg(float dmg)
{
	this->fattackDmg = dmg;
}

void GameObject::setMoveSpeed(float spd)
{
	this->fmoveSpeed = spd;
}

void GameObject::dealDamage(GameObject* attacker, GameObject* defender)
{
	defender->setHealth(defender->getHealth() - attacker->getAttackDmg());
}

sf::Vector2f GameObject::getPosition(sf::Shape& object)
{
	return object.getPosition();
}

sf::FloatRect GameObject::getHitBox(sf::Shape& object)
{
	return object.getGlobalBounds();
}