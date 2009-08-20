#include "../include/board.hpp"

namespace Tetris
{
	int Board::mWidth	= 10;
	int Board::mHeight	= 20;

	void Board::eraseRow(const int& pRow)
	{
		for(int x = 0; x < mWidth; ++x)
		{
			delete mBricks[pRow][x];
			mBricks[pRow][x] = NULL;
		}
	}

	void Board::fillRow(const int& pRow)
	{
		for(int x = 0; x < mWidth; ++x)
		{
			mBricks[pRow][x] = new BrickEmpty();
		}
	}

	Board::Board(const int& pLevel)
	{
		mLevel = pLevel;
		for(int y = 0; y < mHeight; ++y)
		{
			mBricks.push_back( std::vector< Brick* >() );
			for(int x = 0; x < mWidth; ++x)
			{
				mBricks[y].push_back(new BrickEmpty());
			}
		}
	}

	int Board::getWidth()
	{
		return mWidth;
	}

	int Board::getHeight()
	{
		return mHeight;
	}

	int Board::getLevel() const
	{
		return mLevel;
	}

	void Board::removeRow(const int& pRow)
	{
		eraseRow(pRow);
		for(int y = pRow; y > 0; --y)
		{
			for(int x = 0; x < mWidth; ++x)
			{
				mBricks[y][x] = mBricks[y - 1][x];
			}
		}
		fillRow(0);
	}

	void Board::draw() const
	{
		for( int y = 0; y < mHeight; ++y )
		{
			for( int x = 0; x < mWidth; ++x )
			{
				mBricks[y][x]->draw
				(
					mPosition + Gorgon::Point
					(
						x * Brick::getSize() + x,
						y * Brick::getSize() + y
					)
				);
			}
		}
		mScore.draw( mPosition + Gorgon::Point(20,0) );
		Gorgon::Video::get().drawText(0,10,0xFF0000,-1,"Level: %d",mLevel);
	}

	Gorgon::Point Board::getPosition() const
	{
		return mPosition;
	}

	void Board::setBrick(const Gorgon::Point& pPosition,Brick** pBrick)
	{
		//Gorgon::LogRegister(std::string("setBrick. x: %f y: %f..."),pPosition.getX(),pPosition.getY());
		if(mBricks[pPosition.getY()][pPosition.getX()])
		{
			delete mBricks[pPosition.getY()][pPosition.getX()];
			//mBricks[pPosition.getY()][pPosition.getX()] = NULL;
		}
		mBricks[pPosition.getY()][pPosition.getX()] = *pBrick;
		*pBrick = NULL;
		//Gorgon::LogRegister(std::string("Done."),pPosition.getX(),pPosition.getY());
	}

	Brick& Board::getBrick(const Gorgon::Point& pPosition) const
	{
		//printf("getBrick. x: %f y: %f\n",pPosition.getX(),pPosition.getY());
		return *mBricks[pPosition.getY()][pPosition.getX()];
	}

	bool Board::checkCompletedRow(const int pRow) const
	{
		register Gorgon::Point position(0,pRow);
		for(; position.getX() < mWidth; position.addX(1))
		{
			if(!getBrick(position).isCollisional())
			{
				return false;
			}
		}
		return true;
	}

	void Board::logic()
	{
		int pontos = 0;
		for(int row = mHeight-1; row >= 0; --row)
		{
			if(checkCompletedRow(row))
			{
				pontos += 1;
				mScore += 100;
				removeRow(row);
				++row;
			}
		}
		if(pontos > 1) mScore += pontos*10;
		if(mScore.getValue() > 0 && (mScore.getValue() / (mLevel*100)) >= 1)
		{
			++mLevel;
		}
	}
}
