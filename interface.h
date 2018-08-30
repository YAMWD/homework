//定义UI类
#ifndef INTERFACE_H
#define INTERFACE_H

#include <windows.h>

class UI
{
private:
	COORD initplayer1Castlepos;
	COORD initplayer1Wallpos;
	COORD initplayer2Castlepos;
	COORD initplayer2Wallpos;
public:
	COORD player1pos;
	COORD player2pos;
	COORD timepos;
	COORD player1Brickpos;
	COORD player1Diamondpos;
	COORD player1Monsterpos;
	COORD player2Brickpos;
	COORD player2Diamondpos;
	COORD player2Monsterpos;
	COORD player1Castlepos;
	COORD player1Wallpos;
	COORD player2Castlepos;
	COORD player2Wallpos;
	COORD player1CastleHPpos;
	COORD player1WallHPpos;
	COORD player2CastleHPpos;
	COORD player2WallHPpos;
	COORD cardspos;
	COORD card1pos;
	COORD card2pos;
	COORD card3pos;
	COORD card4pos;
	COORD card5pos;
	COORD card6pos;
	COORD hintpos;
public:
	void Draw();
	void Update();
	void Delete(int x,int y);
	COORD Getinitplayer1Castlepos();
	COORD Getinitplayer1Wallpos();
	COORD Getinitplayer2Castlepos();
	COORD Getinitplayer2Wallpos();
	UI ();
};
#endif
