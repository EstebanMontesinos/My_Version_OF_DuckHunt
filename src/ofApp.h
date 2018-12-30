#pragma once

#include "ofMain.h"
#include "Duck.h"
#include "Cross.h"
#include "background.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    void onCollision();
    int x, y;
    bool mouseLeft;
    bool mouseRight;
    Duck *duck;
    Cross *cross;
    background*bg;
    int hit_count;
    int shots;
    int ndx;
    ofSoundPlayer sSound;
    ofSoundPlayer mSound;
    ofSoundPlayer hSound;
    ofSoundPlayer outOfbullets;
    ofSoundPlayer sound_t;
    ofTrueTypeFont myfont;
    
    
};
