#pragma once
#include "PersonalMobilityDevice.h"
#include "PortableMobile.h"
class MobileBag:public PersonalMobilityDevice,PortableMobile
{
public:
	MobileBag(float workingtime, float weight, float volumeBag);
		void Show();
protected:
	float _volumeBag;
};

