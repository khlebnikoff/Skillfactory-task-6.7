#pragma once
class Schreader
{
public:
	Schreader(float powerKWt, float squareM2);
	void Show();
protected:
	float _powerKWt;
	float _squareM2;
};

