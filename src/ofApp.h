#pragma once

#include "ofMain.h"

struct DepthMapPlane {
    //normal vector
    float x, y, z;
    //distance to camera
    float d;
};


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    
    void decodeDepthMap();
    
    void constructDeptMap(int width, int height, vector <unsigned char> depthmapIndices, vector<DepthMapPlane> depthmapPlanes);
    
    ofImage depthmapimage;
    
    
};
