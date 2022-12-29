#include "Radio.h"
Radio::Radio(float weight, string waveRange) :PortableMobile(weight), _waveRange(waveRange)
{

}
void Radio::Show()
{
	cout << "Radio Weight: " << _weight << " Radio Range: " << _waveRange << endl;
}
