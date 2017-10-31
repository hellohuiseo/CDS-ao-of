#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("helloHUISEO World");
    
        serial.setup(0, 9600); //아두이노와 동일한 9600으로 통신 속도를 맞춰준다.
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
   
    if(serial.available() != 0)// 현재 시리얼신호가 있는지 확인 0이 아니면 실행중인 것
        data = serial.readByte();//1바이트의 데이터를 읽어온다.
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(data, 255 - data, (data % 50) * 5);//데이터%11 (0~49)*5 = (0~245)
    
    
    ofDrawCircle(500, 400, data, data);
    //fill(0,0,0);
    
    
    ofDrawCircle(300 +100*cos(angle), 150 + 100*sin(angle), data, data);
    angle += 0.05f;
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
