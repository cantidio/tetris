#ifndef _PIECE_T_
#define _PIECE_T_
#include "piece.hpp"
#define	COLOR_PURPLE Gorgon::Color(170,0,255)

namespace Tetris
{
	/**
	 * Classe que representa a peça T
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			     +---+
	 * 			     |   |
	 * 			     +---+
	 * 			+---++---++---+
	 * 			|   ||   ||   |
	 * 			+---++---++---+
	 */
	class PieceT : public Piece
	{
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceT();
	};
}
#endif