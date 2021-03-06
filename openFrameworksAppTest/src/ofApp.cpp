#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    // 背景色グレー
    ofSetBackgroundColor(40, 40, 40);
    // 600x400 30 frames/sec のウィンドウ
    ofSetWindowShape(600, 400);
    ofSetFrameRate(30);

    // リフレッシュ有無
    ofSetBackgroundAuto(false);

    // 値の初期化
    rad = 0.0;
    posX = 0.0;
    posY = 0.0;
}

//--------------------------------------------------------------
void ofApp::update() {
#if 0
    // 周期的な回転
    rad += 0.05;
    posX = 300 + 150 * cos(rad);
    posY = 200 + 150 * sin(rad);
#elif 1
    // リサージュ図形軌道
    rad += 0.01;
    posX = 300 + 150 * cos(rad * 5);
    posY = 200 + 150 * sin(rad * 6);
#endif
}

//--------------------------------------------------------------
void ofApp::draw() {
    static int r = 200;

    // 赤
    ofSetColor(215, 19, 69);

#if 0
    //ofFill();   // 塗りつぶし図形に設定
    ofSetCircleResolution(20);
    // 円の描画(中心X, 中心Y, 半径r)
    ofDrawCircle(0, 0, r);

    //ofNoFill(); // 輪郭線図形に設定
    ofSetCircleResolution(32);
    ofDrawCircle(600, 0, r);

    ofSetCircleResolution(64);
    ofDrawCircle(0, 400, r);

    ofSetCircleResolution(128);
    ofDrawCircle(600, 400, r);
#endif
    ofDrawCircle(posX, posY, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
