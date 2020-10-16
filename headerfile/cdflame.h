#ifndef __CDFLAME_H__
#define __CDFLAME_H__

#include<DxLib.h>
#include<stdio.h>
#include"cdprocess.h"

enum attacktype{
	red = 1, blue = 2, green = 3
};
enum type{
	bullet = 1,beam = 2
};

struct Data{
	float x; /*����*/
	float y; /*�c��*/
	BOOL living; /*���ݏؖ�*/
	int type; /*���e/�r�[��*/
	float movement; /*�ړ���*/
};

struct Charadata{
	int LIFE;/*�ő��e��*/
	float movement;/*�ړ���*/
	int attacktype;/*����*/
	int type;/*���e/�r�[��*/
	float x;/*����*/
	float y;/*�c��*/
	BOOL living;/*���ݏؖ�*/
	Data BULLET[20];
};

extern Charadata HERO;
extern Charadata ENEMY;

extern int hx,ex;
extern int hy,ey;

void syokika();

#endif