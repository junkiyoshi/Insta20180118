#pragma once
#include "ofMain.h"
#include "ofxBullet.h"

// Leap Motion SDK
#include "Leap.h"
#pragma comment(lib, "Leap.lib")

class ofApp : public ofBaseApp {

public:
	~ofApp();

	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	ofEasyCam cam;
	ofLight light;

	ofxBulletWorldRigid world;
	vector < ofxBulletSphere*> spheres;
	vector<ofColor> spheres_color;
	vector<ofVec3f> spheres_location;

	// Leap Motion
	Leap::Controller leap;
	ofVec3f hand_position;
	void drawHand(Leap::Hand hand);
	void drawFinger(Leap::Finger finger);
};