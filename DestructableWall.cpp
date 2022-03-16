#include "DestructableWall.h"

DestructableWall::DestructableWall()//Default constructor for destructable wall
{
	desWall.setSize(sf::Vector2f(1280, 20));//Sets the size to the size 100, 10
	desWall.setOrigin(sf::Vector2f(640, 10));//Sets the origin to the middle of the shape's size
	desWall.setPosition(sf::Vector2f(640, 10));//Position the wall to somewhere on the screen

	this->canDestroy = true;//Makes it so the wall can take damage
	desWall.getGlobalBounds();//Gets the bounding box of the wall
}

DestructableWall::DestructableWall(sf::Vector2f pos, sf::Vector2f size, int health)//Constructor with parameters
{
	desWall.setSize(size);//Sets the size to the size in the parameter
	desWall.setOrigin(sf::Vector2f(size.x / 2,size.y / 2));//Sets the origin to the middle of the shape's size
	desWall.setPosition(pos);//Position the wall to somewhere on the screen

	this->canDestroy = true;//Makes it so the wall can take damage
	desWall.getGlobalBounds();//Gets the bounding box of the wall
}

sf::FloatRect DestructableWall::getWallBound()
{
	return getHitBox(desWall);//gets the global bounding box of the wall
}

bool DestructableWall::checkInvincible()
{
	return this->canDestroy;
}

void DestructableWall::draw(sf::RenderTarget& target, sf::RenderStates states) const //Draws the shape onto the screen
{
	target.draw(desWall, states);
}