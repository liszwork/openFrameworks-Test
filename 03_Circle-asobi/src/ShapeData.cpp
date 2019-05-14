#include "ShapeData.h"
#include "ofMath.h"


ShapeData::ShapeData(int x, int y, int r, int addVal)
{
}


ShapeData::~ShapeData()
{
}

void ShapeData::Draw()
{
    ofDrawCircle(winW_Half - winW_Quat, winH_Half - winH_Quat, r[0]);
}
