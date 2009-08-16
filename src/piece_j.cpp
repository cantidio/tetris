#include "../include/piece_j.hpp"

namespace Tetris
{
	PieceJ::PieceJ()
	{
		appendBrick(new BrickColored(COLOR_BLUE), Gorgon::Point(0,0));
		appendBrick(new BrickColored(COLOR_BLUE), Gorgon::Point(0,1));
		appendBrick(new BrickColored(COLOR_BLUE), Gorgon::Point(1,1));
		appendBrick(new BrickColored(COLOR_BLUE), Gorgon::Point(2,1));
	}
}
