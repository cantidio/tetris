#include "../include/piece.hpp"
#include <allegro.h>

namespace Tetris
{

	Piece::~Piece()
	{
		for(int i = 0; i < mBricks.size(); ++i)
		{
			delete mBricks[i];
		}
		mBricks.clear();
		mBricksPosition.clear();
	}
	/**
	 * Método para se adicionar um tijolo à peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @param	const Brick& pBrick				, tijolo a ser adicionado à peça
	 * @param	const Gorgon::Point& pPosition	, posição do tijolo
	 */
	void Piece::appendBrick(Brick* pBrick,const Gorgon::Point& pPosition)
	{
		mBricks.push_back(pBrick);
		mBricksPosition.push_back(pPosition);
	}

	Gorgon::Point Piece::getPosition() const
	{
		return mPosition;
	}

	/**
	 * Método para rotacionar a peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 */
	void Piece::rotate()
	{
		const int size = mBricks.size();
		double temp = 0;
		for(int i = 0; i < size; i++)
		{
			temp = mBricksPosition[i].getX();
			mBricksPosition[i].setX( size - 1 - mBricksPosition[i].getY() );
			mBricksPosition[i].setY( temp );
		}
	}
	/**
	 * Método que representa o input da peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @todo	verificar as colisões antes de mover a peça, olhar os casos de UP e DOWN
	 */
	void Piece::control()
	{
		if(key[KEY_SPACE])
		{
			rotate();
		}
		else if(key[KEY_UP])
		{
		}
		else if(key[KEY_DOWN])
		{
			move(Gorgon::Point(0,1));
		}
		else if(key[KEY_LEFT])
		{
			move(Gorgon::Point(-1,0));
		}
		else if(key[KEY_RIGHT])
		{
			move(Gorgon::Point(1,0));
		}
		key[KEY_SPACE]	= 0;
		key[KEY_UP]		= 0;
		key[KEY_DOWN]	= 0;
		key[KEY_LEFT]	= 0;
		key[KEY_RIGHT]	= 0;
	}
	/**
	 * Método que retorna verdadeiro se a peça colidiu
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @return	bool
	 * @todo	implementar
	 */
	bool Piece::colide()
	{
		/*for(int i = 0; i < mBricksPosition.size(); ++i)
		{
			if(pBoard.colide()
			if(mBricksPosition[i]
		}*/
		return false;
	}
	/**
	 * Método para mover a peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 * @param	const Gorgon::Point& pPoint, deslocamento da peça
	 */
	void Piece::move(const Gorgon::Point& pPoint)
	{
		mPosition += pPoint * Brick::getSize() + pPoint;
	}
	/**
	 * Método para desenhar a Peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 */
	void Piece::draw()
	{
		for(int i = 0; i < mBricks.size(); ++i)
		{
			mBricks[i]->draw
			(
				mPosition + (mBricksPosition[i] * Brick::getSize()) + mBricksPosition[i]
			);
		}
	}
}


