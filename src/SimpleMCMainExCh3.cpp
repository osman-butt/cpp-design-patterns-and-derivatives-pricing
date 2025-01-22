#include "../include/SimpleMC2.h"
#include "../include/PowerOption.h"
#include <iostream>

using namespace std;

//int main() {
//	double Expiry;
//	double Strike;
//	unsigned int Power;
//	double Spot;
//	double Vol;
//	double r;
//	unsigned long NumberOfPaths;
//	cout << "\nEnter expiry\n";
//	cin >> Expiry;
//	cout << "\nEnter strike\n";
//	cin >> Strike;
//	cout << "\nEnter power\n";
//	cin >> Power;
//	cout << "\nEnter spot\n";
//	cin >> Spot;
//	cout << "\nEnter vol\n";
//	cin >> Vol;
//	cout << "\nr\n";
//	cin >> r;
//	cout << "\nNumber of paths\n";
//	cin >> NumberOfPaths;
//	PayOffPowerOption thePayOff(Strike, Power);
//	double result = SimpleMonteCarlo2(thePayOff,
//		Expiry,
//		Spot,
//		Vol,
//		r,
//		NumberOfPaths);
//	cout << "\nthe price is " << result << "\n";
//	double tmp;
//	cin >> tmp;
//	return 0;
//}