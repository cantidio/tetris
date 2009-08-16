#include "../include/piece_i.hpp"

namespace Tetris
{
	PieceI::PieceI()
	{
		appendBrick(new BrickColored(COLOR_CYAN), Gorgon::Point(0,0));
		appendBrick(new BrickColored(COLOR_CYAN), Gorgon::Point(0,1));
		appendBrick(new BrickColored(COLOR_CYAN), Gorgon::Point(0,2));
		appendBrick(new BrickColored(COLOR_CYAN), Gorgon::Point(0,3));
	}
}
