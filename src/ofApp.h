#pragma once

#include "ofMain.h"
#include "ofMath.h"
#include "particle.h"

#define DRAW_FPS 60
#define NODE_NUMBER 10000

class ofApp : public ofBaseApp{

	public:
		ofApp();
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		Particle* particleSet[NODE_NUMBER];
		ofVec2f	mousePosition;
		bool mouseLeftPressedFlag, mouseRightPressedFlag;

};
