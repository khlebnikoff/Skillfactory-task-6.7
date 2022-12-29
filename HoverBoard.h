#pragma once
#include"PortableMobile.h"
#include"PersonalMobilityDevice.h"
class HoverBoard: public PersonalMobilityDevice,PortableMobile
{
public:
	HoverBoard (float workingtime, float weight, float jetthrustT);
	void Show();
protected:
	float _jettrhustT;
};