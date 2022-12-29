#include "Phone.h"
Phone::Phone(float weight, string phoneName) :PortableMobile(weight), _phoneName(phoneName)
{

}
void Phone::Show()
{
	cout << "Pnone Name: " << _phoneName << " Phone weight: " << _weight << endl;
}