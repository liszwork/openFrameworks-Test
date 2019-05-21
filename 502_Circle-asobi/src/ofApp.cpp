#include "ofApp.h"
#include "ofMath.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 背景色グレー
    ofSetBackgroundColor(40, 40, 40);
    // 600x400 30 frames/sec のウィンドウ
    ofSetWindowShape(winW, winH);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){
    if (UPDATE_TIMING <= timingCnt )
    {
        sinSrc = (sinSrc > 255) ? 0 : (sinSrc + 1);
        float r_seed = abs(sinf((float)sinSrc) * 50);
        for (int i = 0; i < 5; i++)
        {
            int random = rand() * 0.001;
            r[i] = r_seed + (float)random;
            printf("[%d]%lf + %d > %lf, ", i, r_seed, random, r[i]);
        }
        printf("\n");
        timingCnt = 0; // リセット
    }
    else
    {
        timingCnt++;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    static float winW_Half = winW * 0.5;
    static float winH_Half = winH * 0.5;
    static float winW_Quat = winW_Half * 0.5;
    static float winH_Quat = winH_Half * 0.5;



    ofSetColor(215, 19, 69);
    ofDrawCircle(winW_Half - winW_Quat, winH_Half - winH_Quat, r[0]);
    ofDrawCircle(winW_Half + winW_Quat, winH_Half - winH_Quat, r[1]);
    ofDrawCircle(winW_Half, winH_Half, r[2]);
    ofDrawCircle(winW_Half - winW_Quat, winH_Half + winH_Quat, r[3]);
    ofDrawCircle(winW_Half + winW_Quat, winH_Half + winH_Quat, r[4]);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
