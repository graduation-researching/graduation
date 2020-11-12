#ifndef __CDFLAME_H__
#define __CDFLAME_H__

#include<DxLib.h>
#include<stdio.h>
#include"cdprocess.h"

enum ATKtype{
	red = 1, blue = 2, green = 3, beam = 4
};

struct Data{
	float x; /*����*/
	float y; /*�c��*/
	BOOL living; /*���ݏؖ�*/
	int type; /*�����̐؂�ւ�*/
	float movement; /*�ړ���*/
	int BULLET_IMAGE;
	int time;/*�N�[���^�C��*/
};

struct Charadata{
	float x;/*����*/
	float y;/*�c��*/
	int LIFE;/*�ő��e��*/
	float movement;/*�ړ���*/
	BOOL SF;/*�X�N���[����*/
	int type;/*�����̐؂�ւ�*/
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
void SET_PLAYER_BULLET();

#endif