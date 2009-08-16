
#include "tetris/include/piece.hpp"

#include "../include/board.hpp"
#include "../include/piece_types.hpp"
#include <allegro.h>
#include "gorgon++/src/graphic/include/gorgon_video.hpp"

using namespace Tetris;
int main()
{
	Board a;
	PieceI b;
	PieceJ c;
	PieceL d;
	PieceO e;
	PieceS f;
	PieceT g;
	
	PieceZ i;
	allegro_init();
	install_keyboard();
	Gorgon::Video::init("Tetris");

	//b.move(Gorgon::Point(0,18));

	c.move(Gorgon::Point(1,20));
	d.rotate(); d.rotate(); d.rotate();
	d.move(Gorgon::Point(0,17));
	e.move(Gorgon::Point(2,19));
	f.move(Gorgon::Point(4,19)); f.rotate();
	g.move(Gorgon::Point(4,20));
	
	i.move(Gorgon::Point(2,18)); i.rotate();
	while(!key[KEY_ESC])
	{
		Gorgon::Video::get().clear();
		
		a.draw();
		b.control();
		b.draw();
		c.draw();
		d.draw();
		f.draw();
		g.draw();
		i.draw();
		e.draw();

		Gorgon::Video::get().show();
		rest(1000);
	}

}
