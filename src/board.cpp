#include "../include/board.hpp"

namespace Tetris
{
	int Board::mWidth	= 20;
	int Board::mHeight	= 60;
			
	void Board::eraseRow(const int& pRow)
	{
		for(int x = 0; x < mWidth; ++x)
		{
			delete mBricks[pRow][x];
			mBricks[pRow][x] = new BrickEmpty();
		}
	}

	Board::Board()
	{
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

	void Board::removeRow(const int& pRow)
	{
		for(int y = pRow; y > 1; ++y)
		{
			for(int x = 0; x < mWidth; ++x)
			{
				mBricks[y][x] = mBricks[y - 1][x];
			}
		}
		eraseRow(0);
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
	}
}

