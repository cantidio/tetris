#ifndef _PIECE_J_
#define _PIECE_J_
#include "piece.hpp"
#define	COLOR_BLUE Gorgon::Color(0,0,255)

namespace Tetris
{
	/**
	 * Classe que representa a peça J
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			+---+
	 * 			|   |
	 * 			+---+
	 * 			+---++---++---+
	 * 			|   ||   ||   |
	 * 			+---++---++---+
	 */
	class PieceJ : public Piece
	{
		public:
			/**
			 * Método Construtor
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceJ();
	};
}
#endif
