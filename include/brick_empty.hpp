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
	 * @version	17/08/2009
	 * @details
	 *			Esse tipo de tijolo, não serve para nada, é como se não existisse
	 * só serve para marcar espaço no tabuleiro.
	 */
	class BrickEmpty : public Brick
	{
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 */
			BrickEmpty();
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
			 * Método que desenha a sombra do tijolo na tela
			 *
			 * @author	Cantidio Olivera Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a desenhar
			 * @details
			 *			Esse método não faz nada
			 */
			virtual void drawShadow(const Gorgon::Point& pPosition) const;
	};
}
#endif