#include <graphics.h>

class StaticGraphics {
	int windowX;
	int windowY;
public:
	StaticGraphics(int windowX,int windowY) {
		this->windowX = windowX;
		this->windowY = windowY;
		initgraph(this->windowX,this->windowY);
		getch();        
		closegraph();
	}
	~StaticGraphics() {
		
	}
};
