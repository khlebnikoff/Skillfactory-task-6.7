#include "MobileBag.h"
MobileBag::MobileBag(float workingtime, float weight, float volumeBag) :PersonalMobilityDevice(workingtime), PortableMobile(weight), _volumeBag(volumeBag)
{

}
void MobileBag::Show()
{
	cout << "Bag Follw time: " << _workingtime << " Bag weight: " << _weight <<" Bag Volume: "<<_volumeBag<< endl;
}