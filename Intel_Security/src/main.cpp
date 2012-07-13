#include "testApp.h"
#include "ofAppGlutWindow.h"

//--------------------------------------------------------------
int main(){
	printf("Main()\n");
	ofAppGlutWindow window; // create a window
	//window.setGlutDisplayString("rgba double samples>=4 depth");
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, 1024, 768, OF_WINDOW);
	printf("ofSetupOpenGL called.\n");
	ofRunApp(new testApp()); // start the app
}
