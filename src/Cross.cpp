//
//  Cross.cpp
//  circle
//
//  Created by Esteban Montesinos on 10/28/18.
//

#include <stdio.h>
#include "Cross.h"
#include "ofMain.h"
Cross::Cross(){
    image1.load("round-target-symbol-2.png");
    ofHideCursor();
    color1=0;
    color2=0;
    color3=0;
}
void Cross::draw(){
    ofSetColor(color1,color2 ,color3);
    image1.draw(ofGetMouseX()-15,ofGetMouseY()-15);
    
}

