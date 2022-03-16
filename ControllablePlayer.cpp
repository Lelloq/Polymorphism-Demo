#include "ControllablePlayer.h"

ControllablePlayer::ControllablePlayer()
{
	playerShape.setRadius(20);
	playerShape.setOrigin(sf::Vector2f(10, 10));
	playerShape.setFillColor(sf::Color::Green);
	playerShape.setPosition(sf::Vector2f(640, 650));

	this->setMoveSpeed(10);
	this->setHealth(100);
	this->setAttackDmg(1);
}

void ControllablePlayer::movePlayer(sf::Keyboard::Key keycode)
{
	if (keycode == sf::Keyboard::Key::W)
	{
		playerShape.move(sf::Vector2f(0, -1 * this->fmoveSpeed));
	}
	else if (keycode == sf::Keyboard::Key::S)
	{
		playerShape.move(sf::Vector2f(0, 1 * this->fmoveSpeed));
	}
	else if (keycode == sf::Keyboard::Key::A)
	{
		playerShape.move(sf::Vector2f(-1 * this->fmoveSpeed, 0));
	}
	else if (keycode == sf::Keyboard::Key::D)
	{
		playerShape.move(sf::Vector2f(1 * this->fmoveSpeed, 0));
	}
}

sf::FloatRect ControllablePlayer::getPlrHitBox()
{
	return getHitBox(playerShape);
}

sf::Vector2f ControllablePlayer::getPlrPosition()
{
	return getPosition(playerShape);
}

void ControllablePlayer::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(playerShape, states);
}