#pragma once
#include "PortableMobile.h"
class Laptop:public PortableMobile
{
public:
	Laptop(float weight, int cpuType);
	void Show();
protected:
	string iCPUType[4];
	int _cpuType;
};

 