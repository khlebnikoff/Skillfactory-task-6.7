#include "schreader.h"
Schreader::Schreader(float powerKWt, float squareM2) :_powerKWt(powerKWt), _squareM2(squareM2)
{

}
void Schreader::Show()
{
	cout << "������ �������� ���: " << _powerKWt << " ���������� ������� �2: " << _squareM2 << endl;
}