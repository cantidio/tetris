#include "../include/brick_empty.hpp"
#include "gorgon++/src/graphic/include/gorgon_video.hpp"
namespace Tetris
{
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

	bool BrickEmpty::colide(const Board& pBoard) const
	{
		return false;
	}
}
