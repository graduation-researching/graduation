#ifndef __GAMEMAIN_H__
#define __GAMEMAIN_H__

#include<DxLib.h>
#include"main.h"
#include"loading.h"
#include"cdflame.h"
#include"cdprocess.h"

enum MAPDATA
{
	MAP_NO = 0,MAP_HERO = 1,MAP_ENEMY_1 = 2,MAP_ENEMY_2 = 3,MAP_ENEMY_3 = 4,MAP_WALL = 5
};

void gamemain();
void InitStage(int);

#define MAPWIDTH 12 /*��*/
#define MAPHEIGHT 50 /*����*/
#define IMGSIZE 50/*�摜�T�C�Y*/

extern int MAPDATA[MAPHEIGHT][MAPWIDTH];

#endif