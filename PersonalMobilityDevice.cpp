#include "PersonalMobilityDevice.h"
PersonalMobilityDevice::PersonalMobilityDevice (float workingtime) : _workingtime(workingtime)
{

}
void PersonalMobilityDevice::Show()
{
	cout << "Personal Mobility Device working time range " << _workingtime << endl;
}