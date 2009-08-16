#ifndef _PIECE_S_
#define _PIECE_S_
#include "piece.hpp"
#define	COLOR_GREEN Gorgon::Color(0,255,0)

namespace Tetris
{
	/**
	 * Classe que representa a peça S
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			     +---++---+
	 * 			     |   ||   |
	 * 			     +---++---+
	 * 			+---++---+
	 * 			|   ||   |
	 * 			+---++---+
	 */
	class PieceS : public Piece
	{
		public:
			/**
			 * Método Construtor
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceS();
	};
}
#endif
