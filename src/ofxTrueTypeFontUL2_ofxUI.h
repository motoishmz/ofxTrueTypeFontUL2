#pragma once

#include "ofxTrueTypeFontUL2.h"

class ofxTrueTypeFontUL2_ofxUI : public ofxTrueTypeFontUL2{
	
public:
	float stringWidth(string str) {
		return getStringBoundingBox(str, 0, 0).getWidth();
	}
	float stringHeight(string str) {
		return getStringBoundingBox(str, 0, 0).getHeight();
	}
};