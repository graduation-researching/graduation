#include"loading.h"

int G_IMGhandle[10];

BOOL IMGhandle(){

	G_IMGhandle[player] = LoadGraph("media\\���@.png");
	if (G_IMGhandle[player] == -1)return FALSE;

	return TRUE;
}