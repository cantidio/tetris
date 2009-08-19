#ifndef _PIECE_Z_
#define _PIECE_Z_
#include "piece.hpp"
#define	COLOR_RED Gorgon::Color(255,0,0)

namespace Tetris
{
	/**
	 * Classe que representa a peça Z
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			+---++---+
	 * 			|   ||   |
	 * 			+---++---+
	 * 			     +---++---+
	 * 			     |   ||   |
	 * 			     +---++---+
	 */
	class PieceZ : public Piece
	{
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceZ();
	};
}
#endif