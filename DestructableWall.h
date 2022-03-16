#pragma once
#include "Wall.h"

/* \file DestructableWall.h
*  \brief A wall with health that can get damaged
*/

class DestructableWall : public Wall
{
private:
	sf::RectangleShape desWall;
public:
	DestructableWall();//!Create a wall
	DestructableWall(sf::Vector2f position, sf::Vector2f size, int health);
	/*!Create a wall that specifies with these parameters
	* \param position the position of the wall
	* \param size the size of the wall
	* \param health the health of the wall
	*/
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//!A virtual function to draw the shape
	bool checkInvincible();
	sf::FloatRect getWallBound() override;
};