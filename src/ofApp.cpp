#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(30);
    ofSetVerticalSync(true);
    ofSetWindowShape(ofGetScreenWidth() * (16 / 18.), ofGetScreenWidth() / 2.);
    ofSetWindowPosition((ofGetScreenWidth() - ofGetWidth()) / 2., (ofGetScreenHeight() - ofGetHeight()) / 2.);
    ofBackground(0);
    ofSetCircleResolution(128);
    ofSetLineWidth(4);
}

//--------------------------------------------------------------
void ofApp::update(){

    myInterFace.value01 = mouseX / (float)ofGetWidth();
    myInterFace.value02 = mouseY / (float)ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::draw(){

    auto frame = ofGetWindowRect();
    
    auto time = ofGetElapsedTimef();

    myInterFace.draw(frame, time);
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == '1') myInterFace.button01();
    if (key == '2') myInterFace.button02();
    if (key == '3') myInterFace.button03();
    if (key == '4') myInterFace.button04();
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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
