//
//  Duck.h
//  circle
//
//  Created by Esteban Montesinos on 10/28/18.
//


#ifndef Duck_h
#define Duck_h
#include "ofMain.h"

class Duck:public ofBaseApp{
    
public:
    Duck(int size);
    void update();
    void draw();
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void setDx(int dx);
    void setDy(int dy);
    int getDx();
    int getDy();
    int getSize();
    void reverse();
    void getMiss(int miss);
    ofImage duck;
    ofImage dinverse;
    ofTrueTypeFont myfont;
    

    
private:
    int x, y, size, dx, dy,miss,t,z;
    
};



#endif /* Duck_h */
