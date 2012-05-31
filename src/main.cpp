#include "ofMain.h"
#include "testApp.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){

    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1920,1080, OF_WINDOW);// can be OF_WINDOW or OF_FULLSCREEN
	ofSetWindowTitle("conoisseur");
	ofRunApp( new testApp());
}
