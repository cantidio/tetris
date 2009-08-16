#include "../include/piece_s.hpp"

namespace Tetris
{
	PieceS::PieceS()
	{
		appendBrick(new BrickColored(COLOR_GREEN), Gorgon::Point(2,0));
		appendBrick(new BrickColored(COLOR_GREEN), Gorgon::Point(1,0));
		appendBrick(new BrickColored(COLOR_GREEN), Gorgon::Point(1,1));
		appendBrick(new BrickColored(COLOR_GREEN), Gorgon::Point(0,1));
	}
}
