#ifndef _PIECE_L_
#define _PIECE_L_
#include "piece.hpp"
#define	COLOR_ORANGE Gorgon::Color(255,165,0)

namespace Tetris
{
	/**
	 * Classe que representa a peça L
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	20/08/2009
	 * @details
	 * 			          +---+
	 * 			          |   |
	 * 			          +---+
	 * 			+---++---++---+
	 * 			|   ||   ||   |
	 * 			+---++---++---+
	 */
	class PieceL : public Piece
	{
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	20/08/2009
			 */
			PieceL();
	};
}
#endif