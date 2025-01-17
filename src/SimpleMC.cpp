#include "../include/SimpleMC.h"
#include "../include/Random1.h"
#include <cmath>


// Note: PayOff class is passed by reference, which is more efficient, as a copy is not made.
//       It further allows us to use the function with any derived class of PayOff (without slicing),
//       ie. it enables polymorphism (the ability to call the same function on different objects and get different results).
double SimpleMonteCarlo2(const PayOff& thePayOff,
	double Expiry,
	double Spot,
	double Vol,
	double r,
	unsigned long NumberOfPaths)
{
	double variance = Vol * Vol * Expiry; // The volatility over the period of the option
	double rootVariance = sqrt(variance);
	double itoCorrection = -0.5 * variance; // The correction term is from Itos Lemma
	double movedSpot = Spot * exp(r * Expiry + itoCorrection); // The spot price moved by the drift and the correction term
	double thisSpot; // To keep track of the spot price at each iteration
	double runningSum = 0;

	for (unsigned long i = 0; i < NumberOfPaths; i++)
	{
		double thisGaussian = GetOneGaussianByBoxMuller();
		thisSpot = movedSpot * exp(rootVariance * thisGaussian);
		double thisPayOff = thePayOff(thisSpot);
		runningSum += thisPayOff;
	}
	double mean = runningSum / NumberOfPaths; // Even if the types of the variables are different, the division will be done in double
	mean *= exp(-r * Expiry); // Present value of the mean
	return mean;
}
