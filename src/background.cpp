//
//  background.cpp
//  circle
//
//  Created by Esteban Montesinos on 11/7/18.
//

#include <stdio.h>
#include "background.h"
#include "ofMain.h"
background::background(){
 bg.load("background.png");
}
void background::draw(){
    ofSetColor(255, 255, 255);
    bg.draw(0,0,ofGetWidth(),ofGetHeight());
}

