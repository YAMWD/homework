#ifndef INFO_H
#define INFO_H

#include <string>
#include <cstring>

class playerinfo
{
public:
    int playerCastleHP;
    int playerWallHP;
    int playerBrick;
    int playerDiamond;
    int playerMonster;
    int playerBrickProduce;
    int playerDiamondProduce;
    int playerMonsterProduce:
public:
    playerinfo();
};

class cardsinfo
{
private:
    string name;
    int costtype;
    int cost;
    int mBrick;
    int mDiamond;
    int mMonster;
    int mBrickp;
    int mDiamondp;
    int mMonsterp;
    int uBrick;
    int uDiamond;
    int uMonster;
    int uBrickp;
    int uDiamondp;
    int uMonsterp;
    int attack;
    flag changeable;
    flag both;
public:
    int Getcosttype();
    int Getcost();
    int GetmBrick();
    int GetmDiamond();
    int GetmMonster();
    int GetmBrickp();
    int GetmDiamondp();
    int GetmMonsterp();
    int GetuBrick();
    int GetuDiamond();
    int GetuMonster();
    int GetuBrick;
    int GetuDiamondp();
    int GetuMonsterp();
    int Getattack();
    bool Getchangeable();
    bool Getboth();
    cardsinfo ();
};

class gameinfo
{
private:
    int VictoryTowerLevel;
    int VictoryResourcesQuantity;
public:
    int GetVictoryTowerLevel();
    int GetVictoryResourcesQuantity();
    gameinfo ();
};
#endif // INFO_H
