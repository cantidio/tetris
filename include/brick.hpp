#ifndef _BRICK_
#define _BRICK_
#include "gorgon++/src/geometry/include/gorgon_point.hpp"

namespace Tetris
{
	class Board;
	/**
	 * Classe de tijolo abstrata
	 * 
	 * @author	Cantídio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 */ 
	class Brick
	{
		private:
			/**
			 * Lado em pixels dos tijolos
			 */
			static int		mSize;
		public:
			/**
			 * Método para retornar o tamanho do lado dos tijolos
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			static int getSize();
			/**
			 * Método para desenhar o tijolo
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a desenhar o tijolo
			 */
			virtual void draw(const Gorgon::Point& pPosition) const = 0;
			/**
			 * Método que retornar verdadeiro se houve colisão com o tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Board& pBoard, tabuleiro
			 * @return	bool
			 */
			virtual bool colide(const Board& pBoard) const = 0;
	};
}
#endif
