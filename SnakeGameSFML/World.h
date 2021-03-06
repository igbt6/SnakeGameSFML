#pragma once
#include <SFML/Graphics.hpp>
#include "Snake.h"
#include "Apple.h"
#include "EventManager.h"

class World{
public:
	explicit World(sf::Vector2u windSize, int blockSize);
	~World();

	bool setupEventHandling(StateType stateType,EventManager* evManager);
	int getBlockSize();
	void update();
	void render(sf::RenderWindow& window);
private:
	sf::Vector2u mWindowSize;
	sf::Vector2i mItem;
	int mBlockSize;
	Apple mApple;
	Snake mSnake;
	sf::CircleShape mAppleShape;
	sf::RectangleShape mBounds[4];
};