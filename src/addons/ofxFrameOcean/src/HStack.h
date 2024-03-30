#pragma once

#include "ofMain.h"

#include "ofxTskokmtMath.h"

class HStack {

public:
    static vector<ofRectangle> get(ofRectangle frame_, float width_, float spacing_ = 0, float position_ = 0);
    static vector<ofRectangle> get(ofRectangle frame_, int count_, float spacing_ = 0, float position_ = 0);
    static vector<ofRectangle> get(ofRectangle frame_, vector<float> aspects_, float spacing_ = 0, float position_ = 0);
    
private:
};
