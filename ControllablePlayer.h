#pragma once
#include "Player.h"

class ControllablePlayer : public Player
{
private:
	sf::CircleShape playerShape;
public:
	ControllablePlayer();
	void movePlayer(sf::Keyboard::Key keycode) override;
	sf::FloatRect getPlrHitBox();
	sf::Vector2f getPlrPosition();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};