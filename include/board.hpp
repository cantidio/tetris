#ifndef _BOARD_
#define _BOARD_
#include <vector>
#include "brick.hpp"
#include "brick_types.hpp"
#include "score.hpp"
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	/**
	 * Classe que representa o tabuleiro
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	19/08/2009
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
			/**
			 * Score do tabuleiro
			 */
			Score mScore;
			/**
			 * Nível de dificuldade do tabuleiro
			 */
			int mLevel;
		protected:
			/**
			 * Método para limpar os valores de uma linha
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	13/08/2009
			 * @version	19/08/2009
			 * @param	const int& pRow , linha a ser limpa
			 */
			void eraseRow(const int& pRow);
			/**
			 * Método para preencher uma linha com blocos vazios
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	19/08/2009
			 * @version	19/08/2009
			 * @param	const int& pRow, linha a ser preenchida
			 */
			void fillRow(const int& pRow);
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
			Board(const int& pLevel = 1);
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
			 * Método para retornar o nível de dificuldade do tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	19/08/2009
			 * @version	19/08/2009
			 * @return	int
			 */
			int getLevel() const;
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
			/**
			 * Método para retornar a posição do tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	18/08/2009
			 * @return	Gorgon::Point
			 */
			Gorgon::Point getPosition() const;
			/**
			 * Método para colocar um tijolo no tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	19/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a adicionar o tijolo
			 * @param	Brick** pBrick, ponteiro de ponteiro para o tijolo
			 * @todo	talvez passar ponteiro normal mesmo
			 */
			void setBrick(const Gorgon::Point& pPosition,Brick** pBrick);
			/**
			 * Método para retornar o tijolo de uma determinação posição do tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	17/08/2009
			 * @version	17/08/2009
			 * @param	const Gorgon::Point& pPosition, posição a recuperar o tijolo
			 * @return	Brick&
			 */
			Brick& getBrick(const Gorgon::Point& pPoint) const;
			/**
			 * Método para checar se determinada linha está completa
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	19/08/2009
			 * @param	const int& pRow, linha a ser testada
			 * @return	bool
			 */
			bool checkCompletedRow(const int pRow) const;
			/**
			 * Método que executa a lógica do tabuleiro
			 *
			 * @author	Cantidio Oliveira Fontes
			 * @since	18/08/2009
			 * @version	19/08/2009
			 */
			void logic();
	};
}
#endif