#ifndef _PIECE_HANDLER_
#define _PIECE_HANDLER_
#include "piece_types.hpp"
#include <vector>

namespace Tetris
{
	/**
	 * Classe que representa uma peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	17/08/2009
	 * @version	17/08/2009
	 */
	class PieceHandler
	{
		private:
			/**
			 * Variável que guarda os tijolos que compõem esse arranjo
			 */
			std::vector< Piece* > mPieces;
			/**
			 * Número de peças no buffer
			 */
			static int mPiecesNumber;
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 */
			PieceHandler();
			/**
			 * Método Destrutor
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 */
			virtual ~PieceHandler();
			/**
			 * Método que representa o input da peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			virtual void control(Board& pBoard);
			/**
			 * Método para retornar a peça atual
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @return	Piece*
			 */
			Piece* getCurrentPiece() const;
			/**
			 * Método para desenhar a Peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Board& pBoard, tabuleiro
			 */
			void drawCurrentPiece(const Board& pBoard);
			void drawNextPieces(const Board& pBoard);
			/**
			 * Método para destruir a peça atual e inserir uma nova no buffer
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 */
			void destroyCurrentPiece();
			/**
			 * Método para rotacionar a peça para esquerda
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	20/08/2009
			 * @version	20/08/2009
			 * @param	Board& pBoard , tabuleiro onde a peá está
			 */
			void rotateLeft(Board& pBoard);
			/**
			 * Método para rotacionar a peça para direita
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	20/08/2009
			 * @version	20/08/2009
			 * @param	Board& pBoard , tabuleiro onde a peá está
			 */
			void rotateRight(Board& pBoard);
			/**
			 * Método para mover a peça para baixo de uma vez
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	18/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			void moveDownAuto(Board& pBoard);
			/**
			 * Método para mover a peça para baixo
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			void moveDown(Board& pBoard);
			/**
			 * Método para mover a peça para esquerda
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			void moveLeft(Board& pBoard);
			/**
			 * Método para mover a peça para direita
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			void moveRight(Board& pBoard);
	};
}
#endif
