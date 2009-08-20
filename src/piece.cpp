#include <allegro.h>
#include <gorgon++/gorgon.hpp>
#include "../include/board.hpp"
#include "../include/piece.hpp"

namespace Tetris
{
	Piece::Piece(const Gorgon::Point& pPosition)
	{
		mPosition = pPosition;
		mBricks.clear();
		mBricksPosition.clear();
	}

	Piece::~Piece()
	{
		for(int i = 0; i < mBricks.size(); ++i)
		{
			if(mBricks[i])
			{
				delete mBricks[i];
			}
		}
		mBricks.clear();
		mBricksPosition.clear();
	}

	void Piece::appendBrick(Brick* pBrick,const Gorgon::Point& pPosition)
	{
		mBricks.push_back(pBrick);
		mBricksPosition.push_back(pPosition);
	}

	Gorgon::Point Piece::getPosition() const
	{
		return mPosition;
	}

	int Piece::getBrickNumber() const
	{
		return mBricks.size();
	}

	void Piece::setPosition(const Gorgon::Point& pPosition)
	{
		mPosition = pPosition;
	}

	void Piece::rotateLeft()
	{
		const int size = mBricks.size();
		double temp = 0;

		for(int i = 0; i < size; ++i)
		{
			temp = mBricksPosition[i].getY();
			mBricksPosition[i].setY( size - 1 - mBricksPosition[i].getX() );
			mBricksPosition[i].setX( temp );
		}
	}

	void Piece::rotateRight()
	{
		const int size = mBricks.size();
		double temp = 0;

		for(int i = 0; i < size; ++i)
		{
			temp = mBricksPosition[i].getX();
			mBricksPosition[i].setX( size - 1 - mBricksPosition[i].getY() );
			mBricksPosition[i].setY( temp );
		}
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
	bool Piece::colide(const Board& pBoard)
	{
		for(int i = 0; i < mBricksPosition.size(); ++i)
		{
			Gorgon::Point temp = mPosition + mBricksPosition[i];
			if
			(
				temp.getX()		< 0
				|| temp.getX()	>= Board::getWidth()
				|| temp.getY()	>= Board::getHeight()
				|| pBoard.getBrick(temp).isCollisional()
			)
			{
				return true;
			}
		}
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
		mPosition += pPoint/* * Brick::getSize() + pPoint;*/;
	}
	/**
	 * Método para desenhar a Peça
	 *
	 * @author	Cantidio Oliveira Fontes
	 * @since	13/08/2009
	 * @version	13/08/2009
	 */
	void Piece::draw(const Board& pBoard)
	{
		for(int i = 0; i < mBricks.size(); ++i)
		{
			mBricks[i]->draw
			(
				pBoard.getPosition()
				+ (mPosition* Brick::getSize() + mPosition)
				+ (mBricksPosition[i] * Brick::getSize())
				+ mBricksPosition[i]
			);
		}
	}

	void Piece::drawShadow(const Board& pBoard)
	{
		for(int i = 0; i < mBricks.size(); ++i)
		{
			mBricks[i]->drawShadow
			(
				pBoard.getPosition()
				+ (mPosition* Brick::getSize() + mPosition)
				+ (mBricksPosition[i] * Brick::getSize())
				+ mBricksPosition[i]
			);
		}
	}

	void Piece::pasteToBoard(Board& pBoard)
	{
		//Gorgon::LogRegister(std::string("Pasting to board..."));
		for(int i = 0; i < mBricks.size(); ++i)
		{
			//Gorgon::LogRegister(std::string("I: %d X: %f , Y: %f"),i,(mPosition + mBricksPosition[i]).getX(),(mPosition + mBricksPosition[i]).getY());

			pBoard.setBrick
			(
				mPosition + mBricksPosition[i],
				&mBricks[i]
			);
			mBricks[i] = NULL;
		}
		//Gorgon::LogRegister(std::string("Done."));
	}
}

