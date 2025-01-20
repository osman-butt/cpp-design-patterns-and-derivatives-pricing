#include "PayOff2.h"

class PayOffPowerOption : public PayOff
{
public:
	PayOffPowerOption(double Strike_, unsigned int Power_);
	virtual double operator ()(double Spot) const;
	virtual ~PayOffPowerOption() {};
private:
	double Strike;
	unsigned int Power;
};