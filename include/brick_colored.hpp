#ifndef _BRICK_COLORED_
#define _BRICK_COLORED_
#include "brick.hpp"
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	/**
	 * Classe de tijolo
	 *
	 * @author	Cantídio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	17/08/2009
	 */
	class BrickColored : public Brick
	{
		private:
			/**
			 * cor do tijolo
			 */
			Gorgon::Color mColor;
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Gorgon::Color& pColor, cor do tijolo
			 */
			BrickColored(const Gorgon::Color& pColor);
			/**
			 * Método para desenhar o tijolo
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const Gorgon::Point
			 */
			virtual void draw(const Gorgon::Point& pPosition) const;
			/**
			 * Método para desenhar a sombra do tijolo
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a desenhar
			 */
			virtual void drawShadow(const Gorgon::Point& pPosition) const;
	};
}
#endif