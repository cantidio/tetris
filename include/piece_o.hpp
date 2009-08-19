#ifndef _PIECE_O_
#define _PIECE_O_
#include "piece.hpp"
#define	COLOR_YELLOW Gorgon::Color(200,200,0)

namespace Tetris
{
	/**
	 * Classe que representa a peça O
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 * 			+---++---+
	 * 			|   ||   |
	 * 			+---++---+
	 * 			+---++---+
	 * 			|   ||   |
	 * 			+---++---+
	 */
	class PieceO : public Piece
	{
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			PieceO();
			/**
			 * Método para rotacionar essa peça para direita
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/05/2009
			 * @version	13/05/2009
			 * @details
			 * 			Esse método não faz nada, pois como a peça é um quadrado
			 * mesmo rotacionando as peças não mudam de lugar.
			 */
			virtual void rotateRight();
			/**
			 * Método para rotacionar essa peça para esquerda
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/05/2009
			 * @version	13/05/2009
			 * @details
			 * 			Esse método não faz nada, pois como a peça é um quadrado
			 * mesmo rotacionando as peças não mudam de lugar.
			 */
			virtual void rotateLeft();
	};
}
#endif