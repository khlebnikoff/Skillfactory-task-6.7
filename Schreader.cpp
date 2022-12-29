#include "schreader.h"
Schreader::Schreader(float powerKWt, float squareM2) :_powerKWt(powerKWt), _squareM2(squareM2)
{

}
void Schreader::Show()
{
	cout << "Шредер Мощность КВТ: " << _powerKWt << " Занимаемая площадь М2: " << _squareM2 << endl;
}