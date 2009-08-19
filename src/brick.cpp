#include "../include/brick.hpp"

namespace Tetris
{
	int Brick::	mSize = 10;

	Brick::Brick(const bool& pCollisional)
	{
		mCollisional = pCollisional;
	}

	int Brick::getSize()
	{
		return mSize;
	}

	bool Brick::isCollisional() const
	{
		return mCollisional;
	}
}