#pragma once

#include "ofMain.h"

class bluBar {

public:
    void draw(ofRectangle frame_, float time_);
    
    void button01();
    void button02();
    void button03();
        
private:
    void drawBlu(ofRectangle frame_, float width_, float ratio_, int count_);
    
    float time;
    
    float beginTime;
    
    int count = 1;
};
