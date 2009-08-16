#ifndef _PIECE_I_
#define _PIECE_I_
#include "piece.hpp"
#define	COLOR_CYAN Gorgon::Color(0,255,255)

namespace Tetris
{
	/**
	 * Classe que representa a peça I
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			+---++---++---++---+
	 * 			|   ||   ||   ||   |
	 * 			+---++---++---++---+
	 */
	class PieceI : public Piece
	{
		public:
			/**
			 * Método Construtor
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceI();
	};
}
#endif
