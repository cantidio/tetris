#ifndef _BRICK_COLORED_
#define _BRICK_COLORED_
#include "brick.hpp"
#include "gorgon++/src/graphic/include/gorgon_color.hpp"

namespace Tetris
{
	/**
	 * Classe de tijolo
	 * 
	 * @author	Cantídio Oliveira Fontes
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
			 * Método que retornar quando houve uma colisão no tijolo
			 *
			 * @author	Cantídio Oliveira Fontes
			 * @since	13/09/2009
			 * @version	13/09/2009
			 */
			virtual bool colide(const Board& pBoard) const;
	};
}
#endif
