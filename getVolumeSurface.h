#include <iostream>
struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize;//送れる宅急便サイズ
	bool deliverable;//配達可能か判定
};

void getVolumeSurface(BOX* box);

