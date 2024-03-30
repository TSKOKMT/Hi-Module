#include "interFace.h"

//--------------------------------------------------------------
void interFace::draw(ofRectangle frame_, float time_) {
    
    ofColor color01;
    color01.setHsb(value01 * 256, 255, ofMap(sin(value02 * TWO_PI), -1, 1, 0, 255));
    ofColor color02;
    color02.setHsb(ofWrap(value01 + 1 / 3., 0, 1) * 256, ofMap(sin(value02 * TWO_PI), -1, 1, 0, 255), 255);
    
    ofSetColor(color01);
    ofDrawRectangle(frame_);
    
    ofSetColor(color02);
    if (theID == 0) myBadMode.draw(frame_, time_);
    if (theID == 1) myDarlingApp.draw(frame_, time_);
    if (theID == 2) myBluBar.draw(frame_, time_);
}

//--------------------------------------------------------------
void interFace::button01() {
    
    if (theID == 0) myBadMode.button01();
    if (theID == 1) myDarlingApp.button01();
    if (theID == 2) myBluBar.button01();
}

//--------------------------------------------------------------
void interFace::button02() {
    
    if (theID == 0) myBadMode.button02();
    if (theID == 1) myDarlingApp.button02();
    if (theID == 2) myBluBar.button02();
}

//--------------------------------------------------------------
void interFace::button03() {
    
    if (theID == 0) myBadMode.button03();
    if (theID == 1) myDarlingApp.button03();
    if (theID == 2) myBluBar.button03();
}

//--------------------------------------------------------------
void interFace::button04() {
    
    theID = (theID + 1) % appCount;
}
