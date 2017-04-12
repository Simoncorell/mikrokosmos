#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MikrokosmosApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void MikrokosmosApp::setup()
{
}

void MikrokosmosApp::mouseDown( MouseEvent event )
{
}

void MikrokosmosApp::update()
{
}

void MikrokosmosApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( MikrokosmosApp, RendererGl )
