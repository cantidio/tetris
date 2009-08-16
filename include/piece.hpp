#ifndef _PIECE_
#define _PIECE_
#include "brick_types.hpp"
#include <vector>

namespace Tetris
{
	/**
	 * Classe que representa uma peça
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
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
			 * @param	Brick* pBrick					, tijolo a ser adicionado à peça
			 * @param	const Gorgon::Point& pPosition	, posição do tijolo
			 */
			void appendBrick(Brick* pBrick,const Gorgon::Point& pPosition);
		public:
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
			 * Método para rotacionar a peça
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			virtual void rotate();
			/**
			 * Método que representa o input da peça
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @todo	verificar as colisões antes de mover a peça, olhar os casos de UP e DOWN
			 */
			virtual void control();
			/**
			 * Método que retorna verdadeiro se a peça colidiu
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @return	bool
			 * @todo	implementar
			 */
			bool colide();
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
			void draw();
	};
}
#endif
