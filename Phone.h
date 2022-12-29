#pragma once
#include "PortableMobile.h"
class Phone:public PortableMobile
{
public:
	Phone(float weight, string phoneName);
	void Show();
protected:
	string _phoneName;
};

