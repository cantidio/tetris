#ifndef _PIECE_TYPES_
#define	_PIECE_TYPES_
#include <stdlib.h>
#include "piece_i.hpp"
#include "piece_j.hpp"
#include "piece_l.hpp"
#include "piece_o.hpp"
#include "piece_s.hpp"
#include "piece_t.hpp"
#include "piece_u.hpp"
#include "piece_z.hpp"

namespace Tetris
{
	inline Piece* getRandomPiece()
	{
		switch(random()%7)
		{
			case 0: return new PieceI();
			case 1: return new PieceJ();
			case 2: return new PieceL();
			case 3: return new PieceO();
			case 4: return new PieceS();
			case 5: return new PieceT();
			case 6: return new PieceZ();
			case 7: return new PieceU();
			//case 8:*/
		}
	}
}
#endif
