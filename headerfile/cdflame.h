#ifndef __CDFLAME_H__
#define __CDFLAME_H__

#include<DxLib.h>
#include<stdio.h>

enum attacktype{
	red = 1, blue = 2, green = 3
};
enum type{
	bullet = 1,beam = 2
};

struct BULLET{
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
	BULLET ENEMY_BULLET[5];
	BULLET HERO_BULLET[20];
};

extern int hx,ex;
extern int hy,ey;

void syokika();

#endif