#include "../include/piece_l.hpp"

namespace Tetris
{
	PieceL::PieceL()
	{
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(3,0));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(3,1));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(2,1));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(1,1));
	}

}