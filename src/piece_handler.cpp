#include "../include/piece_handler.hpp"
#include <gorgon++/gorgon.hpp>
#include <allegro.h>

namespace Tetris
{
	int PieceHandler::mPiecesNumber = 3;
	PieceHandler::PieceHandler()
	{
		for(int i = 0; i<mPiecesNumber; ++i)
		{
			mPieces.push_back(getRandomPiece());
		}
	}
	
	PieceHandler::~PieceHandler()
	{
		for(int i=0; i<mPiecesNumber; ++i)
		{
			delete mPieces[i];
		}
	}
	void PieceHandler::control(Board& pBoard)
	{
		//Gorgon::LogRegister(std::string("Control init..."));
		if(key[KEY_LEFT])
		{
			moveLeft(pBoard);
		}
		else if(key[KEY_RIGHT])
		{
			moveRight(pBoard);
		}
		if(key[KEY_A])
		{
			rotateLeft(pBoard);
		}
		else if(key[KEY_D])
		{
			rotateRight(pBoard);
		}
		else if(key[KEY_UP])
		{
			moveDownAuto(pBoard);
		}
		else if(key[KEY_DOWN])
		{
			moveDown(pBoard);
		}
		//Gorgon::LogRegister(std::string("Done."));
	}
	
	Piece* PieceHandler::getCurrentPiece() const
	{
		if(mPieces.size())
		{
			return mPieces[0];
		}
		return NULL;
	}

	void PieceHandler::drawCurrentPiece(const Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		Gorgon::Point temp;
		if(piece)
		{
			piece->draw(pBoard);
			temp = piece->getPosition();
			while(!piece->colide(pBoard))
			{
				piece->move(Gorgon::Point(0,1));
			}
			piece->move(Gorgon::Point(0,-1));
			piece->drawShadow(pBoard);
			piece->setPosition(temp);
		}
	}

	void PieceHandler::drawNextPieces(const Board& pBoard)
	{
		Gorgon::Point temp;
		Piece* piece;
		for(int i = 1; i < mPiecesNumber; ++i)
		{
			piece	= mPieces[i];
			temp	= piece->getPosition();
			piece->setPosition(Gorgon::Point(pBoard.getWidth()+1,8+i*4));
			piece->draw(pBoard);
			piece->setPosition(temp);
		}
	}

	void PieceHandler::destroyCurrentPiece()
	{
		//Gorgon::LogRegister(std::string("Destroy piece..."));
		delete mPieces[0];
		mPieces.erase(mPieces.begin());
		//Gorgon::LogRegister(std::string("Done."));
		//Gorgon::LogRegister(std::string("Put new piece in buffer..."));
		mPieces.push_back(getRandomPiece());
		//Gorgon::LogRegister(std::string("Done."));
	}

	inline bool rotateArrange(Piece* pPiece,Board& pBoard)
	{
		if(pPiece->colide(pBoard))
		{
			int i;
			const int pieceNumber			= pPiece->getBrickNumber();
			const Gorgon::Point position	= pPiece->getPosition();

			//tenta mover para esquerda
			for(i = 0; i < pieceNumber; ++i)
			{
				pPiece->setPosition(position - Gorgon::Point(i,0));
				if(!pPiece->colide(pBoard))
				{
					return true;
				}
			}
			pPiece->setPosition(position);

			//tenta mover para direita
			for(i = 0; i < pieceNumber; ++i)
			{
				pPiece->setPosition(position + Gorgon::Point(i,0));
				if(!pPiece->colide(pBoard))
				{
					return true;
				}
			}

			pPiece->setPosition(position);
			return false;
		}
		return true;
	}

	void PieceHandler::rotateLeft(Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		piece->rotateLeft();
		if(!rotateArrange(piece,pBoard))
		{
			piece->rotateRight();
		}
	}

	void PieceHandler::rotateRight(Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		piece->rotateRight();
		
		if(!rotateArrange(piece,pBoard))
		{
			piece->rotateLeft();
		}
	}

	void PieceHandler::moveDownAuto(Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		while(!piece->colide(pBoard))
		{
			piece->move(Gorgon::Point(0,1));
		}
		piece->move(Gorgon::Point(0,-1));
		piece->pasteToBoard(pBoard);
		destroyCurrentPiece();
	}
	
	void PieceHandler::moveDown(Board& pBoard)
	{
		//Gorgon::LogRegister(std::string("get Current piece..."));
		Piece* piece = getCurrentPiece();
		//Gorgon::LogRegister(std::string("Done."));
		//Gorgon::LogRegister(std::string("Move Current piece..."));
		piece->move(Gorgon::Point(0,1));
		//Gorgon::LogRegister(std::string("Done."));

		//Gorgon::LogRegister(std::string("test Current piece collision..."));
		if(piece->colide(pBoard))
		{
			//Gorgon::LogRegister(std::string("move Current piece back."));
			piece->move(Gorgon::Point(0,-1));
			//Gorgon::LogRegister(std::string("Done."));
			//Gorgon::LogRegister(std::string("paste Current piece to board..."));
			piece->pasteToBoard(pBoard);
			//Gorgon::LogRegister(std::string("Done."));
			//Gorgon::LogRegister(std::string("destroying Current piece..."));
			destroyCurrentPiece();
			//Gorgon::LogRegister(std::string("Done."));
		}
		//Gorgon::LogRegister(std::string("Done."));
	}

	void PieceHandler::moveLeft(Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		piece->move(Gorgon::Point(-1,0));
		if(piece->colide(pBoard))
		{
			piece->move(Gorgon::Point(1,0));
		}
	}

	void PieceHandler::moveRight(Board& pBoard)
	{
		Piece* piece = getCurrentPiece();
		piece->move(Gorgon::Point(1,0));
		if(piece->colide(pBoard))
		{
			piece->move(Gorgon::Point(-1,0));
		}
	}
}
