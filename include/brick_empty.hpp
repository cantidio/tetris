#ifndef _BRICK_EMPTY_
#define _BRICK_EMPTY_
#include "brick.hpp"

namespace Tetris
{
	/**
	 * Classe de tijolo
	 * 
	 * @author	Cantídio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @details
	 *			Esse tipo de tijolo, não serve para nada, é como se não existisse
	 * só serve para marcar espaço no tabuleiro.
	 */ 
	class BrickEmpty : public Brick
	{
		public:
			/**
			 * Método que desenha o tijolo na tela
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a desenhar
			 * @details
			 *			Não desenha nada.
			 */
			virtual void draw(const Gorgon::Point& pPosition) const;
			/**
			 * Método que verifica se o tijolo colidiu
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Board& pBoard, tabuleiro
			 * @details
			 *			Sempre retorna false
			 */
			virtual bool colide(const Board& pBoard) const;
	};
}
#endif
