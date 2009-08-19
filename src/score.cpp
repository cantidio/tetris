#include "../include/score.hpp"

namespace Tetris
{
	Score::Score()
	{
		mScore &= 0;
	}

	long Score::getValue() const
	{
		return mScore;
	}
	
	void Score::draw(const Gorgon::Point& pPosition) const
	{

		Gorgon::Video::get().drawText
		(
			pPosition.getX(),
			pPosition.getY(),
			0xFFFFFF,
			-1,
			"Score: %d",
			mScore
		);
	}

	void Score::operator += (const long& pValue)
	{
		mScore += pValue;
	}

	void Score::operator -= (const long& pValue)
	{
		mScore -= pValue;
	}

	void Score::operator *= (const long& pValue)
	{
		mScore *= pValue;
	}

	void Score::operator /= (const long& pValue)
	{
		mScore /= pValue;
	}
}
