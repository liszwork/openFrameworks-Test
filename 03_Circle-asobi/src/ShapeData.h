#pragma once

#include "ofMain.h"

class ShapeData
{
private:
    virtual int x = 0;
    virtual int y = 0;
    virtual int r = 100;
    virtual int beforeR = r;
    virtual int addVal = 0;
public:
    ShapeData(int x, int y, int r, int addVal);
    ~ShapeData();
    void Draw();
};

class Color {
public:
    int r = 0;
    int g = 0;
    int b = 0;
};
