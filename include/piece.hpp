#ifndef _PIECE_
#define _PIECE_
#include "brick_types.hpp"
#include "board.hpp"
#include <vector>

namespace Tetris
{
	/**
	 * Classe que representa uma peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	17/08/2009
	 */
	class Piece
	{
		private:
			/**
			 * Variável que guarda os tijolos que compõem esse arranjo
			 */
			std::vector< Brick* > mBricks;
			/**
			 * Variável que guarda as posições dos tijolos que compõem esse arranjo
			 */
			std::vector< Gorgon::Point > mBricksPosition;
			/**
			 * Variável que guarda a posição do arranjo
			 */
			Gorgon::Point mPosition;
		protected:
			/**
			 * Método para se adicionar um tijolo à peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Brick& pBrick				, tijolo a ser adicionado à peça
			 * @param	const Gorgon::Point& pPosition	, posição do tijolo
			 */
			void appendBrick(Brick* pBrick,const Gorgon::Point& pPosition);
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @sicne	19/08/2009
			 * @version	19/08/2009
			 * @param	const Gorgon::Point& pPosition , posição de spaw da peça
			 */
			Piece(const Gorgon::Point& pPosition = Gorgon::Point(Board::getWidth()/2 - 1,0));
			/**
			 * Método Destrutor
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			virtual ~Piece();
			/**
			 * Método para retornar a posição da peça
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/09/2009
			 * @version	13/09/2009
			 * @return	Gorgon::Point
			 */
			Gorgon::Point getPosition() const;
			/**
			 * Método para retornar o número de tijolos da peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @return	int
			 */
			int getBrickNumber() const;
			/**
			 * Método para setar a posição da peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Gorgon::Point& pPosition, posição da peça
			 */
			void setPosition(const Gorgon::Point& pPosition);
			/**
			 * Método para rotacionar a peça para direita
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 */
			virtual void rotateRight();
			/**
			 * Método para rotacionar a peça para esquerda
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			virtual void rotateLeft();
			/**
			 * Método que retorna verdadeiro se a peça colidiu
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @return	bool
			 * @todo	implementar
			 */
			bool colide(const Board& pBoard);
			/**
			 * Método para mover a peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Gorgon::Point& pPoint, deslocamento da peça
			 */
			void move(const Gorgon::Point& pPoint);
			/**
			 * Método para desenhar a Peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			void draw(const Board& pBoard);
			/**
			 * Método para desenhar a sombra da peça
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Board& pBoard, tabuleiro
			 */
			void drawShadow(const Board& pBoard);
			/**
			 * Método que passa a peça para o tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	Board& pBoard, tabuleiro
			 */
			void pasteToBoard(Board& pBoard);
	};
}
#endif