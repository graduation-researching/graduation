#include"loading.h"
#include"cdflame.h"
#include<string.h>

int G_IMGhandle[10][13];
int gif[4][12];
int TITLE;
int BULLET[4];

BOOL IMGhandle(){

	G_IMGhandle[field][0] = LoadGraph("media\\�w�i(�������d�l).png");
	if (G_IMGhandle[field][0] == -1)return FALSE;

	TITLE = LoadGraph("media\\�^�C�g��.png");
	if (TITLE == -1)return FALSE;


	BULLET[0] = LoadGraph("media\\�e\\�����e(��) ���1.png");
	if (BULLET[0] == -1)return FALSE;
	BULLET[1] = LoadGraph("media\\�e\\�����e(��) ���3.png");
	if (BULLET[1] == -1)return FALSE;
	BULLET[2] = LoadGraph("media\\�e\\�����e(��) ���1.png");
	if (BULLET[2] == -1)return FALSE;
	BULLET[3] = LoadGraph("media\\�e\\���[�U�[ ���@��p.png");
	if (BULLET[3] == -1)return FALSE;


	for (int i = 0 , soeji = 1; i < 13; i++,soeji++){
		
		char red[50], blue[50], green[50];
		sprintf_s(red, "media\\��\\%d.�v���\��(��).png", soeji);
		sprintf_s(blue, "media\\��\\%d.�v���\��(��).png", soeji);
		sprintf_s(green, "media\\��\\%d.�v���\��(��).png", soeji);

		G_IMGhandle[enemy1][i] = LoadGraph(red,soeji);
		if (G_IMGhandle[enemy1][i] == -1)return FALSE;
		G_IMGhandle[enemy2][i] = LoadGraph(blue,soeji);
		if (G_IMGhandle[enemy2][i] == -1)return FALSE;
		G_IMGhandle[enemy3][i] = LoadGraph(green,soeji);
		if (G_IMGhandle[enemy3][i] == -1)return FALSE;
	}

	LoadDivGraph("media\\img_sub\\R.png",12,6,2,55,55,gif[0]);
	LoadDivGraph("media\\img_sub\\B.png", 12, 6, 2, 55, 55, gif[1]);
	LoadDivGraph("media\\img_sub\\G.png", 12, 6, 2, 55, 55, gif[2]);
	LoadDivGraph("media\\img_sub\\L.png", 12, 12, 1, 55, 55, gif[3]);

	return TRUE;
}
BOOL InitBulletImage(int i){
	switch (HERO.type)
	{
	case red:
		HERO.BULLET[i].BULLET_IMAGE[0] = BULLET[0];
		break;
	case blue:
		HERO.BULLET[i].BULLET_IMAGE[1] = BULLET[1];
		break;
	case green:
		HERO.BULLET[i].BULLET_IMAGE[2] = BULLET[2];
		break;
	case beam:
		HERO.BULLET[i].BULLET_IMAGE[3] = BULLET[3];
		break;
	}

	return TRUE;
}