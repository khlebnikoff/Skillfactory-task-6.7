#pragma once
#include <iostream>
#include <string>
using namespace std;
class I_Electronics
{
public:
	virtual void Show() = 0;
	virtual ~I_Electronics() = default;
};

