#ifndef _BOARD_
#define _BOARD_
#include <vector>
#include "brick.hpp"
#include "brick_types.hpp"
#include "gorgon++/src/geometry/include/gorgon_point.hpp"
namespace Tetris
{
	/**
	 * Classe que representa o tabuleiro
	 * 
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 */
	class Board
	{
		private:
			/**
			 * Largura do tabuleiro em tijolos
			 */
			static int mWidth;
			/**
			 * Altura do tabuleiro em tijolos
			 */
			static int mHeight;
			/**
			 * Matriz de tijolos
			 */
			std::vector< std::vector< Brick* > > mBricks;
			/**
			 * Posição do tabuleiro na tela
			 */
			Gorgon::Point mPosition;
		protected:
			/**
			 * Método para limpar os valores de uma linha
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const int& pRow , linha a ser limpa
			 */
			void eraseRow(const int& pRow);
		public:
			/**
			 * Método Construtor
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @details
			 * 			Ao criar o tabuleiro, o mesmo é preenchido com tijolos vazios
			 */ 
			Board();
			/**
			 * Método para retornar o número de tijolos que o tabuleiro comporta na horizontal
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @return	int
			 */
			static int getWidth();
			/**
			 * Método para retornar o número de tijolos que o tabuleiro comporta na vertical
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @return	int
			 */
			static int getHeight();
			/**
			 * Método que remove uma linha de tijolos do tabuleiro
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 * @param	const int& pRow , linha a ser removida
			 * @details
			 * 			Ao remover a linha de blocos, os tijolos das linhas superiores
			 * descem ocupando o espaço antes ocupado pelos tijolos removidos
			 */
			void removeRow(const int& pRow);
			/**
			 * Método para desenhar o tabuleiro e seus tijolos
			 * 
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	13/08/2009
			 */
			void draw() const;
	};
}
#endif
