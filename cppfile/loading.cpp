#include"loading.h"

int G_IMGhandle[10];
int gif[12];

BOOL IMGhandle(){

	G_IMGhandle[field] = LoadGraph("media\\�w�i(�������d�l).png");
	if (G_IMGhandle[field] == -1)return FALSE;
	G_IMGhandle[enemy1] = LoadGraph("media\\��\\1.�v���\��(��).png");
	if (G_IMGhandle[enemy1] == -1)return FALSE;

	LoadDivGraph("media\\img_sub\\R.png",12,6,2,55,55,gif);

	return TRUE;
}