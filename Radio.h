#pragma once
#include "PortableMobile.h"
class Radio:public PortableMobile
{
public:
	Radio(float weight, string waveRange);
	void Show();
private:
	string _waveRange;
};