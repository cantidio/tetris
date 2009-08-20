
#include <stdlib.h>

#include <iostream>
#include <allegro.h>
#include <gorgon++/gorgon.hpp>
#include "../include/board.hpp"
#include "../include/piece_types.hpp"
#include "../include/piece_handler.hpp"

int velocity	= 0;
int timer		= 0;
void game_time()
{
	++velocity;
	++timer;
}
END_OF_FUNCTION(game_time);
using namespace Tetris;
int main()
{
	Board a;
	PieceHandler handler;

	allegro_init();
	install_keyboard();
	LOCK_VARIABLE(velocity);
	LOCK_VARIABLE(timer);
	LOCK_FUNCTION(game_time);
	install_int_ex(game_time, BPS_TO_TIMER(60));
	Gorgon::Video::init("Gorguix");

	int merda = 60;
	while(!key[KEY_ESC])
	{
		while(timer >= 0 && !key[KEY_ESC])
		{
			handler.control(a);
			if(key[KEY_P])
			{
				key[KEY_P]=0;
				Gorgon::Video::get().drawText("Pause",140,110,0xFF0000);
				Gorgon::Video::get().show();
				while(!key[KEY_P]);
				key[KEY_P]=0;
			}
			Gorgon::Video::get().clear();
			if(	velocity >= ( 60 - (a.getLevel() * 3) )	)
			{
				handler.moveDown(a);
				velocity = 0;
			}

			key[KEY_A]		= 0;
			key[KEY_D]		= 0;
			key[KEY_UP]		= 0;
			key[KEY_DOWN]	= 0;
			key[KEY_LEFT]	= 0;
			key[KEY_RIGHT]	= 0;

			a.logic();
			a.draw();

			if(a.checkEndGame())
			{
				Gorgon::Video::get().drawText("Game Over",120,110,0xFF0000);
				Gorgon::Video::get().show();
				sleep(2);
				return 0;
			}

			handler.drawCurrentPiece(a);
			handler.drawNextPieces(a);
			Gorgon::Video::get().show();
			--timer;
		}
	}
}