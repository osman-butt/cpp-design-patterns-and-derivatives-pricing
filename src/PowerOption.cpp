#include "../include/PowerOption.h"
#include <math.h>
#include <minmax.h>

PayOffPowerOption::PayOffPowerOption(double Strike_, unsigned int Power_)
	: Strike(Strike_), Power(Power_)
{
}

double PayOffPowerOption::operator ()(double Spot) const
{
	return max(pow(Spot, Power) - Strike,0.0);
}