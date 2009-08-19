#include "../include/piece_u.hpp"

namespace Tetris
{
	PieceU::PieceU()
	{
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(0,0));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(2,0));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(0,1));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(1,1));
		appendBrick(new BrickColored(COLOR_ORANGE), Gorgon::Point(2,1));
	}
}