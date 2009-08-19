#include "../include/piece_t.hpp"

namespace Tetris
{
	PieceT::PieceT()
	{
		appendBrick(new BrickColored(COLOR_PURPLE), Gorgon::Point(1,0));
		appendBrick(new BrickColored(COLOR_PURPLE), Gorgon::Point(0,1));
		appendBrick(new BrickColored(COLOR_PURPLE), Gorgon::Point(1,1));
		appendBrick(new BrickColored(COLOR_PURPLE), Gorgon::Point(2,1));
	}
}

