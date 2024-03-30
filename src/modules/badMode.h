#pragma once

#include "ofMain.h"

class badMode {

public:
    void draw(ofRectangle frame_, float time_);
    
    void button01();
    void button02();
    void button03();
        
private:
    float leftTime = 0;
    float rightTime = 0;
    float previousTime;
    
    vector<float> rotations;
    
    float leftSpeed = 0;
    float rightSpeed = 0;
};
