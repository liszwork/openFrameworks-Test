#pragma once

#include "ofMain.h"

/*
 * ref. https://qiita.com/0x50/items/87258b7720ca754da481
 * ./bin/data/にcicaのBoldのttf入れる必要あり
 * →コピーロジック入れる？
 */

class ofApp : public ofBaseApp {
private:
    float posX, posY;
    float goalX, goalY;
public:
    ofTrueTypeFont cica;

    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

};
