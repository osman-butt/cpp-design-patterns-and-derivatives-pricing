#include "../include/PayOff1.h"
#include <MinMax.h>

PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
	: Strike(Strike_), TheOptionsType(TheOptionsType_)
{
}

double PayOff::operator()(double spot) const {
	switch (TheOptionsType)
	{
	case call:
		return max(spot - Strike,0.0);
	case put:
		return min(Strike - spot,0.00);
	default:
		throw("Unknown option type.");
	}
}