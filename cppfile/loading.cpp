#include"loading.h"

int G_IMGhandle[10];

BOOL IMGhandle(){

	G_IMGhandle[0] = LoadGraph("media\\���@.png");
	if (G_IMGhandle[0] == -1)return FALSE;

}