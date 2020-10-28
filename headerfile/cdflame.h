#ifndef __CDFLAME_H__
#define __CDFLAME_H__

#include<DxLib.h>
#include<stdio.h>
#include"cdprocess.h"

enum attacktype{
	red = 1, blue = 2, green = 3
};
enum type{
	bullet = 1/*���e*/,beam = 2
};

struct Data{
	float x; /*����*/
	float y; /*�c��*/
	BOOL living; /*���ݏؖ�*/
	int type; /*���e/�r�[��*/
	float movement; /*�ړ���*/
};

struct Charadata{
	float x;/*����*/
	float y;/*�c��*/
	int LIFE;/*�ő��e��*/
	float movement;/*�ړ���*/
	int attacktype;/*����*/
	int type;/*���e/�r�[��*/
	BOOL living;/*���ݏؖ�*/
	Data BULLET[20];/*���@/�G�@�̒e*/
	int StageNum;/*�R���e�B�j���[����ۂ̃X�e�[�W�i���o�[�̋L�^*/
};

extern Charadata HERO;
extern Charadata ENEMY;

extern int hx,ex;
extern int hy,ey;

void syokika();
void Init_ENEMY1();
void Init_ENEMY2();
void Init_ENEMY3();

#endif