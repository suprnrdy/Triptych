#pragma once

#include "ofMain.h"
#include "Application.h"
#include "Buttons.h"
#include "Settings.h"
#include "Room.h"

// test
#include "PBD.h"

class testApp : public ofBaseApp{
	public:
		testApp();
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		bool show_gui;
		bool debug;
		Camera cam;
		Application app;
		buttons::Buttons _gui;
		
		Particles2 ps;
		Room room;
};
