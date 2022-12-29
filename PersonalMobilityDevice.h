#pragma once
#include "I_Electronics.h"
class PersonalMobilityDevice:virtual public I_Electronics
{
public:
	PersonalMobilityDevice(float workingtime);
	void Show();
protected:
	float _workingtime;
};

