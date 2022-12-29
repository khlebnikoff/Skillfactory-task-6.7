#include "HoverBoard.h"
HoverBoard::HoverBoard(float workingtime, float weight, float jetthrustT): PersonalMobilityDevice(workingtime), PortableMobile(weight), _jettrhustT(jetthrustT)
{

}
void HoverBoard::Show()
{
	cout << "Hover board weight: " << _weight << " Working Time: " << _workingtime <<" Jet Thrust: "<<_jettrhustT << endl;
}