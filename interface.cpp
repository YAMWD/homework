#include <iostream>
#include <cstdio>
#include <windows.h>
#include "interface.h"

UI::UI()
{
    timepos={35,0};
    player1pos={0,0};
    player2pos={73,0};
    player1Castlepos={20,10};
    initplayer1Castlepos=player1Castlepos;
    player1CastleHPpos=initplayer1Castlepos;
    player1CastleHPpos.Y++;
    player1Wallpos={30,10};
    initplayer1Wallpos=player1Wallpos;
    player1WallHPpos=initplayer1Wallpos;
    player1WallHPpos.Y++;
    player2Castlepos={60,10};
    initplayer2Castlepos=player2Castlepos;
    player2CastleHPpos=initplayer2Castlepos;
    player2CastleHPpos.Y++;
    player2Wallpos={50,10};
    initplayer2Wallpos=player2Wallpos;
    player2WallHPpos=initplayer2Wallpos;
    player2WallHPpos.Y++;
    cardspos={0,15};
    card1pos={0,17};
    card2pos={0,18};
    card3pos={0,19};
    card4pos={0,20};
    card5pos={0,21};
    card6pos={0,22};
    hintpos={0,24};
}

COORD UI::Getinitplayer1Castlepos()
{
	return this->initplayer1Castlepos;
}

COORD UI:: Getinitplayer1Wallpos()
{
	return this->initplayer1Wallpos;
}

COORD UI::Getinitplayer2Castlepos()
{
	return this->initplayer2Castlepos;
}

COORD UI:: Getinitplayer2Wallpos()
{
	return this->initplayer2Wallpos;
}

void UI::Delete(int x,int y)
{
	COORD now={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),now);
	printf(" ");
}

void UI::Draw()
{
	SetConsoleTitle("Arcomage");
	system("mode con cols=80 lines=25");
	system("color 0E");

	HANDLE client=GetStdHandle(STD_OUTPUT_HANDLE);
	UI inter;

	int interval=3;
	SetConsoleCursorPosition(client,inter.player1pos);
	printf("Player1");
	inter.player1pos.Y+=interval;
	inter.player1Brickpos=inter.player1pos;
	SetConsoleCursorPosition(client,inter.player1Brickpos);
	printf("砖头");
	inter.player1pos.Y+=interval;
	inter.player1Diamondpos=inter.player1pos;
	SetConsoleCursorPosition(client,inter.player1Diamondpos);
	printf("宝石");
	inter.player1pos.Y+=interval;
	inter.player1Monsterpos=inter.player1pos;
	SetConsoleCursorPosition(client,inter.player1Monsterpos);
	printf("怪物");

	SetConsoleCursorPosition(client,inter.player2pos);
	printf("Player2");
	inter.player2pos.X+=interval;
	inter.player2pos.Y+=interval;
	inter.player2Brickpos=inter.player2pos;
	SetConsoleCursorPosition(client,inter.player2Brickpos);
	printf("砖头");
	inter.player2pos.Y+=interval;
	inter.player2Diamondpos=inter.player2pos;
	SetConsoleCursorPosition(client,inter.player2Diamondpos);
	printf("宝石");
	inter.player2pos.Y+=interval;
	inter.player2Monsterpos=inter.player2pos;
	SetConsoleCursorPosition(client,inter.player2Monsterpos);
	printf("怪物");

	SetConsoleCursorPosition(client,inter.player1CastleHPpos);
	printf("p1CastleHP");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			SetConsoleCursorPosition(client,inter.player1Castlepos);
			printf("T");
			inter.player1Castlepos.X++;
			Sleep(100);
		}
		inter.player1Castlepos.X=inter.Getinitplayer1Castlepos().X;
		inter.player1Castlepos.Y--;
	}
	SetConsoleCursorPosition(client,inter.player1WallHPpos);
	printf("p1WallHP");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			SetConsoleCursorPosition(client,inter.player1Wallpos);
			printf("W");
			inter.player1Wallpos.X++;
			Sleep(100);
		}
		inter.player1Wallpos.X=inter.Getinitplayer1Wallpos().X;
		inter.player1Wallpos.Y--;
	}

	SetConsoleCursorPosition(client,inter.player2CastleHPpos);
	printf("p2CastleHP");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			SetConsoleCursorPosition(client,inter.player2Castlepos);
			printf("T");
			inter.player2Castlepos.X++;
			Sleep(100);
		}
		inter.player2Castlepos.X=inter.Getinitplayer2Castlepos().X;
		inter.player2Castlepos.Y--;
	}
	SetConsoleCursorPosition(client,inter.player2WallHPpos);
	printf("p2WallHP");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			SetConsoleCursorPosition(client,inter.player2Wallpos);
			printf("W");
			inter.player2Wallpos.X++;
			Sleep(100);
		}
		inter.player2Wallpos.X=inter.Getinitplayer2Wallpos().X;
		inter.player2Wallpos.Y--;
	}

	SetConsoleCursorPosition(client,inter.cardspos);
	printf("player 的手牌");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card1pos);
	printf("1");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card2pos);
	printf("2");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card3pos);
	printf("3");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card4pos);
	printf("4");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card5pos);
	printf("5");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.card6pos);
	printf("6");
	Sleep(500);
	SetConsoleCursorPosition(client,inter.hintpos);
	printf("player 出牌");

	for(int i=1;i<=50;i++)
	{
		SetConsoleCursorPosition(client,inter.timepos);
		printf("回合(%d/50)",i);
		Sleep(500);
	}
}
