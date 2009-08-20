#ifndef _BRICK_
#define _BRICK_
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	class Board;
	/**
	 * Classe de tijolo abstrata
	 *
	 * @author	Cantídio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	17/08/2009
	 */
	class Brick
	{
		private:
			/**
			 * Lado em pixels dos tijolos
			 */
			static int		mSize;
			/**
			 * Variável que guarda se o tijolo pode colidir
			 */
			bool mCollisional;
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const bool& pCollisional, se o tijolo pode colidir
			 */
			Brick(const bool& pCollisional = true);
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
			 * Método para desenhar a sombra do tijolo
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a desenhar
			 */
			virtual void drawShadow(const Gorgon::Point& pPosition) const = 0;
			/**
			 * Método que retornar se o tijolo pode colidir
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @return	bool
			 */
			bool isCollisional() const;
	};
}
#endif