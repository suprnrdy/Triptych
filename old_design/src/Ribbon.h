/*
 *  Ribbon.h
 *  ribbon
 *
 *  Created by Joel Lewis on 28/06/2012.
 *  Copyright 2012 Hellicar & Lewis. All rights reserved.
 *
 */

#pragma once
#include "ofMain.h"
#include "ofxBullet.h"

class Ribbon {

public:
	Ribbon();
	Ribbon(int nNodes, ofCamera *cam, ofxBulletWorldRigid *world);
	~Ribbon();
	
	void update();
	void draw();
	
	ofxBulletWorldRigid *world;
	void setAnchorPoint(ofVec3f p);
	
	ofVec3f getAnchorPoint();
	
	vector<ofxBulletBox*> nodes;
	vector<ofxBulletJoint*> joints;
	
	ofMesh mesh;
	vector<ofVec3f> points;
	vector<ofVec4f> refPoints;
	
	ofImage img;
	ofTexture tex;
	
	float width;
	
protected:
	int nNodes;
	
	btGeneric6DofConstraint  *anchorPoint;
	
	
private:
	void setupAnchorPoint();
	
	
	ofMaterial material;
};