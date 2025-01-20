#include<iostream>
#include "../include/SimpleMC.h"
using namespace std;

//int main()
//{
//	double Expiry;
//	double Strike;
//	double Spot;
//	double Vol;
//	double r;
//	unsigned long NumberOfPaths;
//	cout << "\nEnter expiry\n";
//	cin >> Expiry;
//	cout << "\nEnter strike\n";
//	cin >> Strike;
//	cout << "\nEnter spot\n";
//	cin >> Spot;
//	cout << "\nEnter vol\n";
//	cin >> Vol;
//	cout << "\nr\n";
//	cin >> r;
//	cout << "\nNumber of paths\n";
//	cin >> NumberOfPaths;
//	PayOff callPayOff(Strike, PayOff::call);
//	PayOff putPayOff(Strike, PayOff::put);
//	PayOff digitalCallPayOff(Strike, PayOff::digitalCall);
//	PayOff digitalPutPayOff(Strike, PayOff::digitalPut);
//	double resultCall = SimpleMonteCarlo2(callPayOff,
//		Expiry,
//		Spot,
//		Vol,
//		r,
//		NumberOfPaths);
//	double resultPut = SimpleMonteCarlo2(putPayOff,
//		Expiry,
//		Spot,
//		Vol,
//		r,
//		NumberOfPaths);
//	double resultDigitalCall = SimpleMonteCarlo2(digitalCallPayOff,
//		Expiry,
//		Spot,
//		Vol,
//		r,
//		NumberOfPaths);
//	double resultDigitalPut = SimpleMonteCarlo2(digitalPutPayOff,
//		Expiry,
//		Spot,
//		Vol,
//		r,
//		NumberOfPaths);
//	cout << "Prices:\n";
//	cout << "Call: " << resultCall << "\n";
//	cout << "Put: " << resultPut << "\n";
//	cout << "Digital Call: " << resultDigitalCall << "\n";
//	cout << "Digital Put: " << resultDigitalPut << "\n";
//	double tmp;
//	cin >> tmp;
//	return 0;
//}