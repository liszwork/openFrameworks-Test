#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {
private:
    int winW = 600;
    int winH = 400;

    int timingCnt = 0;
    const int UPDATE_TIMING = 20;

    int sinSrc = 0;
    float r[5] = {100, 100, 100, 100, 100};
public:
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
