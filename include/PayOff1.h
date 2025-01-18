#ifndef PAYOFF_H
#define PAYOFF_H
class PayOff
{
public:
	enum OptionType { call, put };
	PayOff(double Strike_, OptionType TheOptionsType_);
	double operator()(double Spot) const; // Overloaded operator() method
	double GetStrike() const;
	OptionType GetTheOptionsType() const;
private:
	double Strike;
	OptionType TheOptionsType;
};
#endif

// The overloaded operator() method is a function call operator.
// It is a special function that is called when an object of the class is called as if it were a function.
// The const is a convinience to the user of the class.
// It tells that the Strike or option type would not be changed by the function.

// Adding new option types:
// If we want to price a digital option, we would need to add to the enum,
// and add to the switch statement. If we did this, we would need to recompile
// every file that uses the PayOff class => THE CODE IS NOT INDEPENDENT
// From SOLID principles we should adapt the open-closed principles.
