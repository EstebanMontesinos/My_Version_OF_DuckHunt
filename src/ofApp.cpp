#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
    bg=new background;
    duck = new Duck(40);
    cross=new Cross;
    ofHideCursor();
    ofSetFrameRate(70);
    sound_t.load("soundtrack.mp3");
    sSound.load("shot.mp3");
    mSound.load("miss.mp3");
    hSound.load("hit.mp3");
    outOfbullets.load("gameover.mp3");
    myfont.load("f1.ttf", 30);
}

//--------------------------------------------------------------
void ofApp::update(){
    duck->update();
    if(mouseLeft&mouseRight){
        onCollision();
        mouseLeft=false;
        mouseRight=false;
    }
    if(shots==0){
        sound_t.play();
    }
    if(shots==11){
        duck=new Duck(40);
        shots=0;
        hit_count=0;
        duck->getMiss(0);
        
    }

}

void ofApp::onCollision(){
    double dist = sqrt(pow(x - duck->getX(),2)+ pow(y - duck->getY(),2));
    if(dist < duck->getSize()){
        duck->setX(rand()%ofGetWidth());
        duck->setY(ofGetHeight());
        duck->setDy(-1);
        duck->setDx(rand()%10);
        sSound.play();
        hSound.play();
        hit_count++;
        shots++;
    }else{
        duck->reverse();
        sSound.play();
        mSound.play();
        shots++;
    }
    if(shots==10){
        outOfbullets.play();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    bg->draw();
    duck->draw();
    cross->draw();
    ofSetColor(ofColor::black);
    myfont.drawString("hits: " + ofToString(hit_count), 340, 650);
    myfont.drawString("shots: "+ ofToString(shots),460,650);
    if(shots==10){
        myfont.drawString("Game Over you are out of bullets press(spacebar to reset)",220, 350);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key==32){
        mouseLeft=true;
        mouseRight=true;
        
   
}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
     mouseLeft = false;
     mouseRight = false;
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int a, int b){
    x = a;
    y = b;
    double dist = sqrt(pow(x - duck->getX(),2)+ pow(y - duck->getY(),2));
    
    if(dist < duck->getSize()){
        cross->color1=255;
    }
    else{
         cross->color1=0;
        
    }
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int a, int b, int button){
    
    
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

            mouseLeft = true;
            mouseRight = true;
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
            mouseLeft = false;
            mouseRight = false;

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}

