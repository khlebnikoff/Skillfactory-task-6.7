#include "Laptop.h"
Laptop::Laptop(float weight, int cpuType) :PortableMobile(weight), _cpuType(cpuType)
{
	
}
void Laptop::Show()
{
	iCPUType[0] = "x86";
	iCPUType[1] = "x64";
	iCPUType[2] = "ARM";
	iCPUType[3] = "quantum";

	if ((_cpuType >= 0) && (_cpuType <= 3))
	{
		cout << "CPU Type: " << iCPUType[_cpuType] << " Laptop  weight: " << _weight << endl;
	}
	else
	{
		cout << "Laptop  weight: " << _weight << endl;
	}
}
