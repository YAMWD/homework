#include <iostream>
#include <cstdio>
#include "info.h"

gameinfo::gameinfo()
{
    freopen("Console.ini","r",stdin);
    int n;
    for(int i=1;i<=8;i++)
        scanf("%d",&n);
    scanf("%d",&n);
    EndingRounds=n;
    scanf("%d",&n);
    VictoryTowerLevel=n;
    scanf("%d",&n);
    VictoryResourcesQuantity=n;
    fclose(stdin);
}

int gameinfo::GetVictoryTowerLevel()
{
    return VictoryTowerLevel;
}

int gameinfo::GetVictoryResourcesQuantity()
{
    return VictoryResourcesQuantity;
}

int gameinfo::GetEndingRounds()
{
    return EndingRounds;
}

playerinfo::playerinfo()
{
    freopen("Console.ini","r",stdin);
    int n;
    scanf("%d",&n);
    playerCastleHP=n;
    scanf("%d",&n);
    playerWallHP=n;
    scanf("%d",&n);
    playerBrick=n;
    scanf("%d",&n);
    playerDiamond=n;
    scanf("%d",&n);
    playerMonster=n;
    scanf("%d",&n);
    playerBrickProduce=n;
    scanf("%d",&n);
    playerDiamondProduce=n;
    scanf("%d",&n);
    playerMonsterProduce=n;
    fclose(stdin);
}

cardsinfo::cardsinfo (std::string name,std::string description,int costtype,int cost,bool changeable,bool again)
{
    this->name=name;
    this->description=description;
    this->costtype;
    this->cost;
    this->changeable;
    this->again;
}

std::string cardsinfo::Getname()
{
    return name;
}

std::string cardsinfo::Getdescription()
{
    return description;
}

int cardsinfo::Getcosttype()
{
    return costttpe;
}

int cardsinfo::Getcost()
{
    return cost;
}

bool Getchangeable()
{
    return changeable;
}

bool Getagain()
{
    return again;
}

void initializecards()
{
    card[1]=("生死抗争","双方同时失去8块砖头",1,0,1,0);
    card[2]=("幸运宝藏","砖头+2,宝石+2,再次出牌",1,0,1,1);
    card[3]=("友谊之地","城墙+1,再次出牌",1,1,1,1);
    card[4]=("伟大矿工","砖头产量+1",1,3,1,0);
    card[5]=("矿石之脉","如果砖头产量少于对手,则砖头产量+2,否则+1",1,4,1,0);
    card[6]=("矮人之矿","城墙+4,砖头产量+1",1,7,1,0);
    card[7]=("努力工作","城墙+5,宝石-6",1,2,1,0);
    card[8]=("幻影之手","如果砖头产量少于对手,则砖头产量等于对手",1,5,1,0);
    card[9]=("基础之墙","城墙+3",1,2,1,0);
    card[10]=("稳固之墙","城墙+4",1,3,1,0);
}
