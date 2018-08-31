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
    int playerMonsterProduce;
public:
    playerinfo();
};

class cardsinfo
{
private:
    std::string name;
    std::string description;
    int costtype;
    int cost;
    bool changeable;
    bool again;
public:
    std::string Getname();
    std::string Getdescription();
    int Getcosttype();
    int Getcost();
    bool Getchangeable();
    bool Getagain();
    cardsinfo (std::string name,int costtype,int cost,bool changeable,bool both);
};

cardsinfo card[90];

class gameinfo
{
private:
    int VictoryTowerLevel;
    int VictoryResourcesQuantity;
    int EndingRounds;
public:
    int GetVictoryTowerLevel();
    int GetVictoryResourcesQuantity();
    int GetEndingRounds();
    gameinfo ();
};
#endif // INFO_H
