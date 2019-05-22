#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    // �w�i�F�O���[
    ofSetBackgroundColor(40, 40, 40);
    // 600x400 30 frames/sec �̃E�B���h�E
    ofSetWindowShape(600, 400);
    ofSetFrameRate(30);

    // �����ʒu
    posX = 300;
    posY = 200;
    goalX = posX;
    goalY = posY;

    // �t�H���g�ݒ�
    ofTrueTypeFont::setGlobalDpi(72);
    cica.load("Cica-Bold_1.ttf", 10);
    cica.setLineHeight(24);         // �s��
    cica.setLetterSpacing(1.0);     // ������
}

//--------------------------------------------------------------
void ofApp::update() {
    // �}�E�X����
    float difX, difY;
    difX = goalX - posX;
    difY = goalY - posY;
    // �ۂ̈ʒu
    posX += difX * 0.05;
    posY += difY * 0.05;
}

//--------------------------------------------------------------
void ofApp::draw() {
    ofSetColor(215, 19, 69);
    ofLine(5, 5, 50, 20);

    ofSetColor(215, 200, 69);
    ofTriangle(60, 60, 30, 90, 90, 90);

    ofSetColor(215, 19, 200);
    ofRect(100, 10, 150, 150);

    ofSetColor(50, 19, 69);
    ofCircle(200, 100, 30);

    ofSetColor(50, 200, 200);
    ofEllipse(200, 150, 50, 30);

    ofSetColor(200, 200, 200);
    cica.drawString("Text!!!!", 100, 100);

    //ofDrawCircle(15, 15, 5);
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
