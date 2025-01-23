#include "../include/PayOffBridge.h"
#include <iostream>

PayOffBridge::PayOffBridge(const PayOffBridge& original)
{
	std::cout << "Copy constructor of PayOffBridge" << std::endl;
	ThePayOffPtr = original.ThePayOffPtr->clone();
}
PayOffBridge::PayOffBridge(const PayOff& innerPayOff)
{
	std::cout << "Constructor of PayOffBridge" << std::endl;
	ThePayOffPtr = innerPayOff.clone();
}
PayOffBridge::~PayOffBridge()
{
	std::cout << "Destructor of PayOffBridge" << std::endl;
	delete ThePayOffPtr;
}
PayOffBridge& PayOffBridge::operator=
(const PayOffBridge& original)
{
	std::cout << "Assignment operator of PayOffBridge" << std::endl;
	if (this != &original)
	{
		delete ThePayOffPtr;
		ThePayOffPtr = original.ThePayOffPtr->clone();
	}
	return *this;
}