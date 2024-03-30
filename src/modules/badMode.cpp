#include "badMode.h"

//--------------------------------------------------------------
void badMode::draw(ofRectangle frame_, float time_) {
    
    leftTime += (time_ - previousTime) * leftSpeed;
    rightTime += (time_ - previousTime) * rightSpeed;
    
    leftSpeed *= .9;
    rightSpeed *= .9;
    
    auto unit = sqrt(frame_.width * frame_.height) / 120.;
    
    int count_ = 4;
    bool bVertical_ = false;
    float interval_ = .5;
    float term_ = 2;
    float delay_ = PI;
    
    rotations.resize(count_);
    
    float radius = 30 * unit;
    
    for (int i = 0; i < count_; i++) {
        ofPoint center;
        float theTerm;
        if (bVertical_) {
            float theY = frame_.y + frame_.height / (float)(count_ + 1) * (i + 1);
            center = ofPoint(frame_.getCenter().x, theY);
            theTerm = ofSignedNoise(ofMap(theY, frame_.getTop(), frame_.getBottom(), 0, PI), (int)(time_ / interval_)) * term_;
        }
        else {
            float theX = frame_.x + frame_.width / (float)(count_ + 1) * (i + 1);
            center = ofPoint(theX, frame_.getCenter().y);
            theTerm = ofSignedNoise(ofMap(theX, frame_.getLeft(), frame_.getRight(), 0, PI), (int)(time_ / interval_)) * term_;
        }
        
        if (i == 0) center = ofPoint(radius, radius);
        else if (i == 3) center = ofPoint(radius, frame_.height - radius);
        else if (i == 2) center = ofPoint(frame_.width - radius, radius);
        else center = ofPoint(frame_.width - radius, frame_.height - radius);
        
        if (i < 2) rotations[i] = (leftTime - delay_) / theTerm * TWO_PI;
        else rotations[i] = (rightTime - delay_) / theTerm * TWO_PI;
        
        ofPushMatrix();
        ofTranslate(center);
        ofRotateRad(rotations[i]);
        
        int res = 64;
        
        ofBeginShape();
        ofVertex(0, 0);
        for (int j = 0; j <= res; j++) {
            float theAngle = ofMap(j, 0, res, PI, TWO_PI);
            ofVertex(ofPoint(cos(theAngle), sin(theAngle)) * radius);
        }
        ofEndShape(true);
        
        ofPopMatrix();
    }
    
    previousTime = time_;
}

//--------------------------------------------------------------
void badMode::button01() {
    
    leftSpeed = 10;
}

//--------------------------------------------------------------
void badMode::button02() {
    
    leftSpeed = 0;
    rightSpeed = 0;
}

//--------------------------------------------------------------
void badMode::button03() {
    
    rightSpeed = -10;
}
