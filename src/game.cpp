#include <iostream>
#include <allegro.h>
#include <gorgon++/include/graphic/gorgon_video.hpp>
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
	Gorgon::Video::init("Tetris");

	int merda = 60;
	while(!key[KEY_ESC])
	{
		while(timer >= 0 && !key[KEY_ESC])
		{
			Gorgon::Video::get().clear();

			handler.control(a);
			if(key[KEY_Y])
			{
				merda-=5;//aumenta a velocidade
				key[KEY_Y]=0;
			}
			if
			(
				velocity >= ( 60 - (a.getLevel() * 5) )
			)
			{
				handler.moveDown(a);
				velocity = 0;
//				printf("\a");
				std::cout << std::flush;
			}
			a.logic();
			a.draw();

			handler.drawCurrentPiece(a);
			Gorgon::Video::get().show();
			--timer;

			key[KEY_A]		= 0;
			key[KEY_D]		= 0;
			key[KEY_UP]		= 0;
			key[KEY_DOWN]	= 0;
//			key[KEY_LEFT]	= 0;
//			key[KEY_RIGHT]	= 0;
		}
	}
}