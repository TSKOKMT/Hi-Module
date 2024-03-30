#pragma once

#include "ofMain.h"

#include "badMode.h"
#include "darlingApp.h"
#include "bluBar.h"

class interFace {

public:
    void draw(ofRectangle frame_, float time_);
    
    void button01();
    void button02();
    void button03();
    void button04();
    
    float value01;
    float value02;
        
private:
    int theID;
    int appCount = 3;
    
    badMode myBadMode;
    darlingApp myDarlingApp;
    bluBar myBluBar;
};
