#include "../include/brick_colored.hpp"
#include "gorgon++/src/graphic/include/gorgon_video.hpp"

namespace Tetris
{
	BrickColored::BrickColored(const Gorgon::Color& pColor)
	{
		mColor = pColor;
	}

	void BrickColored::draw(const Gorgon::Point& pPosition) const
	{
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor,
			true
		);
	}
	
	bool BrickColored::colide(const Board& pBoard) const
	{
	}
}
