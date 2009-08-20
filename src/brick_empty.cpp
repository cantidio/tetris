#include "../include/brick_empty.hpp"
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	BrickEmpty::BrickEmpty() : Brick(false)
	{
	}

	void BrickEmpty::draw(const Gorgon::Point& pPosition) const
	{
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			Gorgon::Color(130,130,130),
			false
		);
	}

	void BrickEmpty::drawShadow(const Gorgon::Point& pPosition) const
	{}
}