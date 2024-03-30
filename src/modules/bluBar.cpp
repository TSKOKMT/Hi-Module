#include "bluBar.h"

//--------------------------------------------------------------
void bluBar::draw(ofRectangle frame_, float time_) {
    
    time = time_;
    
    auto unit = sqrt(frame_.width * frame_.height) / 120.;
    
    float ratio = ofClamp(time_ - beginTime, 0, 1);
    ratio = 1 - ratio;
    ratio = pow(ratio, 4);
    
    drawBlu(frame_, 18 * unit / count, ratio, count);
}

//--------------------------------------------------------------
void bluBar::button01() {
    
    count--;
    count = ofClamp(count, 1, 12);
}

//--------------------------------------------------------------
void bluBar::button02() {
    
    beginTime = time;
}

//--------------------------------------------------------------
void bluBar::button03() {
    
    count++;
    count = ofClamp(count, 1, 12);
}

//--------------------------------------------------------------
void bluBar::drawBlu(ofRectangle frame_, float width_, float ratio_, int count_) {
    
    for (int i = 0; i < count_; i++) {
        float theY = ofMap(i, -.5, count - .5, frame_.getTop(), frame_.getBottom());
        
        ofPushMatrix();
        ofTranslate(frame_.getCenter().x, theY);
        ofRotateRad(HALF_PI);
        
        ofTranslate(ofRandom(-1, 1) * ratio_ * width_, ofRandom(-1, 1) * ratio_ * width_ * 30);
        ofRotateRad(ofRandom(-1, 1) * ratio_ * PI / 8.);
        
        ofDrawRectangle(-width_ / 2., -10000, width_, 20000);
        
        ofPopMatrix();
    }
}
