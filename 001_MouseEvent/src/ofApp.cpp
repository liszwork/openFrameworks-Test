#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    // 背景色グレー
    ofSetBackgroundColor(40, 40, 40);
    // 600x400 30 frames/sec のウィンドウ
    ofSetWindowShape(600, 400);
    ofSetFrameRate(30);

    // 初期位置
    posX = 300;
    posY = 200;
    goalX = posX;
    goalY = posY;
}

//--------------------------------------------------------------
void ofApp::update() {
    // マウス動作
    float difX, difY;
    difX = goalX - posX;
    difY = goalY - posY;
    // 丸の位置
    posX += difX * 0.05;
    posY += difY * 0.05;
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofSetColor(215, 19, 69);
    ofDrawCircle(posX, posY, 10);
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
    goalX = x;
    goalY = y;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    goalX = x;
    goalY - y;
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
