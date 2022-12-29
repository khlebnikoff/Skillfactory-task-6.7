#include "Bicycle.h"
Bicycle::Bicycle(float workingtime, int wheelDiameter) :PersonalMobilityDevice(workingtime), _wheelDiameter(wheelDiameter)
{

}
void Bicycle::Show()
{
	cout << "Bicycle working time: " << _workingtime << " bicycle wheel diameter: " << _wheelDiameter << endl;
}
