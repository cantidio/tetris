#ifndef _PIECE_U_
#define _PIECE_U_
#include "piece.hpp"
#define	COLOR_ORANGE Gorgon::Color(255,165,0)

namespace Tetris
{
	/**
	 * Classe que representa a peça U
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			+---+     +---+
	 * 			|   |     |   |
	 * 			+---+     +---+
	 * 			+---++---++---+
	 * 			|   ||   ||   |
	 * 			+---++---++---+
	 */
	class PieceU : public Piece
	{
		public:
			/**
			 * Método Construtor
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceU();
	};
}
#endif
