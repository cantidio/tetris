#ifndef _SCORE_
#define	_SCORE_
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	/**
	 * Classe que representa a Pontuação
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	18/08/2009
	 * @version	18/08/2009
	 */
	class Score
	{
		private:
			/**
			 * Variável que guarda a pontuação
			 */
			long mScore;
		public:
			/**
			 * Método Construtor
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 */
			Score();
			long getValue() const;
			/**
			 * Método para desenhar o score na tela
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @param	Gorgon::Point& pPosition, posição a desenhar o score
			 */
			void draw(const Gorgon::Point& pPosition) const;
			/**
			 * Operador de soma
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @param	const long& pValue, valor a somar ao score
			 */
			void operator += (const long& pValue);
			/**
			 * Operador de subtração
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @param	const long& pValue, valor a subtrair ao score
			 */
			void operator -= (const long& pValue);
			/**
			 * Operador de multiplicação
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @param	const long& pValue, valor a multiplicar ao score
			 */
			void operator *= (const long& pValue);
			/**
			 * Operador de divisão
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @param	const long& pValue, valor a dividir ao score
			 */
			void operator /= (const long& pValue);
	};
}
#endif

