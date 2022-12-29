#include "PortableMobile.h"
PortableMobile::PortableMobile(float weight) : _weight(weight)
{

}
void PortableMobile::Show()
{
	cout << "Portable Mobile Device weight: " << _weight << endl;
}