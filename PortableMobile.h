#pragma once
#include "I_Electronics.h"

class PortableMobile:virtual public I_Electronics
{
public:
	PortableMobile(float weight);
	void Show();
protected:
	float _weight;
};

