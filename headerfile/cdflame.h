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
	int BULLET_IMAGE;/*�e�̉摜*/
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
	int IMGH[4][12];/*���@�̉摜*/
};

struct CharaData{
	float x;/*����*/
	float y;/*�c��*/
	int LIFE;/*�ő��e��*/
	float movement;/*�ړ���*/
	int type;/*�����̐؂�ւ�*/
	BOOL living;/*���ݏؖ�*/
	Data BULLET[20];/*���@/�G�@�̒e*/
	int IMG1[2];/*�G���I�̉摜�������̓{�X�̑O������p*/
	int IMG2[4];/*�{�X�̌�땔����p*/
};

extern Charadata HERO;
extern CharaData ENEMY[10];
extern CharaData STAGEBOSS;

extern int hx,ex;
extern int hy,ey;

void syokika();
void Init_ENEMY1(int,int);
void Init_ENEMY2(int, int);
void Init_ENEMY3(int, int);
void Init_BOSS(int, int, int);
void SET_PLAYER_BULLET();

#endif