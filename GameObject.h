#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class GameObject : public sf::Drawable
{
protected:
	int ihealth = 10;
	float fmoveSpeed = 0;
	float fattackDmg = 0;
	sf::Vector2f getPosition(sf::Shape& object);
	sf::FloatRect getHitBox(sf::Shape& object);
public:
	void setHealth(int health);
	int getHealth();
	float getAttackDmg();
	void setMoveSpeed(float spd);
	void setAttackDmg(float dmg);
	void dealDamage(GameObject* attacker, GameObject* defender);
};