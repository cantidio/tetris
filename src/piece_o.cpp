#include "../include/piece_o.hpp"

namespace Tetris
{
	PieceO::PieceO()
	{
		appendBrick(new BrickColored(COLOR_YELLOW),Gorgon::Point(0,0));
		appendBrick(new BrickColored(COLOR_YELLOW),Gorgon::Point(0,1));
		appendBrick(new BrickColored(COLOR_YELLOW),Gorgon::Point(1,0));
		appendBrick(new BrickColored(COLOR_YELLOW),Gorgon::Point(1,1));
	}

	void PieceO::rotate()
	{
	}
}
