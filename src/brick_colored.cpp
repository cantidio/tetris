#include "../include/brick_colored.hpp"
#include <gorgon++/gorgon.hpp>

namespace Tetris
{
	BrickColored::BrickColored(const Gorgon::Color& pColor)
	{
		mColor = pColor;
	}

	void BrickColored::draw(const Gorgon::Point& pPosition) const
	{
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor,
			true
		);
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor - Gorgon::Color(60,60,60,60)
		);
		/*Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor,
			true
		);
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor - Gorgon::Color(200,200,200)
		);
		Gorgon::Video::get().drawLine
		(
			pPosition.getX() + 1,
			pPosition.getY() + 1,
			pPosition.getX() + 1,
			pPosition.getY() + Brick::getSize() - 1,
			(mColor - Gorgon::Color(120,120,120)).get()
		);

		Gorgon::Video::get().drawLine
		(
			pPosition.getX() + 1,
			pPosition.getY() + 1,
			pPosition.getX() + Brick::getSize() - 1,
			pPosition.getY() + 1,
			(mColor - Gorgon::Color(50,50,50)).get()
		);*/
	}

	void BrickColored::drawShadow(const Gorgon::Point& pPosition) const
	{
		Gorgon::Video::get().drawRectangle
		(
			pPosition,
			Gorgon::Rectangle(Brick::getSize(),Brick::getSize()),
			mColor - Gorgon::Color(60,60,60,60)
		);
	}
}