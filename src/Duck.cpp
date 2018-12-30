//
//  Duck.cpp
//  circle
//
//  Created by Esteban Montesinos on 10/28/18.
//

#include <stdio.h>
#include "Duck.h"
#include "ofMain.h"


Duck::Duck(int size){
    this->size = size;
    myfont.load("f1.ttf", 30);
    duck.load("duck.png");
    x =rand()% ofGetWidth()-size;
    y =ofGetHeight();
    dx =(rand()%10);
    dy =-1;

}
//--------------------------------------------------------------
void Duck::update(){
    
    if(x <= 0 || x >= ofGetWidth() - size){
        dx *= -1;
        bool horizontal=true;
        bool vertical=false;
        duck.mirror(vertical,horizontal);
    }
    if(y<0){
        x=rand()% ofGetWidth()-size;
        y=ofGetHeight();
        miss++;
    }
    x += dx;
    y += dy;

    
}

int Duck::getX(){
    return x + (size /2) ;
}
int Duck::getY(){
    return y + (size/2);
}
int Duck::getDx(){
    return dx;
}
int Duck::getDy(){
    return dy;
}
void Duck::setX(int x){
    this->x = x;
}
void Duck::setY(int y){
    this->y = y;
}
void Duck::setDx(int dx){
    this->dx = dx;
}
void Duck::setDy(int dy){
    this->dy = dy;
}
int Duck::getSize(){
    return size;
}
void Duck::reverse(){
    if(dx==0){
        dx=dx+1;
    }else{
        bool horizontal=true;
        bool vertical=false;
        duck.mirror(vertical,horizontal);
    dx=dx*-1;
    dy=dy-1;
    }
    
}
void Duck::getMiss(int miss){
    this->miss=miss;
}

//--------------------------------------------------------------
void Duck::draw(){
    ofSetColor(0, 0, 0);
    duck.draw(x,y);
myfont.drawString("misses: "+ofToString(miss),590,650);
}
