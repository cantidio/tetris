#include "../include/piece_z.hpp"

namespace Tetris
{
	PieceZ::PieceZ()
	{
		appendBrick(new BrickColored(COLOR_RED), Gorgon::Point(0,0));
		appendBrick(new BrickColored(COLOR_RED), Gorgon::Point(1,0));
		appendBrick(new BrickColored(COLOR_RED), Gorgon::Point(1,1));
		appendBrick(new BrickColored(COLOR_RED), Gorgon::Point(2,1));
	}
}