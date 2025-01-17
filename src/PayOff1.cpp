#include "../include/PayOff1.h"
#include <MinMax.h>


// The constructor initializes the Strike and TheOptionsType member variables,
// by using the initializer list syntax.
// This has the advantage of being more efficient than assigning 
// values to the member variables in the constructor body.
PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
	: Strike(Strike_), TheOptionsType(TheOptionsType_)
{
}

// The operator() method is a function call operator. 
// It is a special function that is called when an object of the class is called as if it were a function.
// The const is a convinience to the user of the class.
// It tells that the Strike or option type would not be changed by the function.
double PayOff::operator()(double spot) const {
	switch (TheOptionsType)
	{
	case call:
		return max(spot - Strike,0.0);
	case put:
		return max(Strike - spot,0.00);
	default:
		throw("Unknown option type.");
	}
}

double PayOff::GetStrike() const {
	return Strike;
}

PayOff::OptionType PayOff::GetTheOptionsType() const {
	return TheOptionsType;
}