#pragma once
#include "PersonalMobilityDevice.h"
class Bicycle: public PersonalMobilityDevice
{
public:
	Bicycle(float workingtime, int wheelDiameter);
	void Show();
protected:
	int _wheelDiameter;
};

