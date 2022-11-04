// 24-10-2022pz.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

int main()
{
    //Napisz program obliczania miejsc zerowych funkcji liniowej postaci ax + b gdzie a≠0(wer.1.0)

    double a, b, mz = 0;

    cout << "y = ax + b" << endl;;
    cout << "Podaj a: ";

    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    if(a == 0){
	cout << "Nie dziel przez zero!";
    }else{
    mz = -b / a;
    cout << "Miejsce zerowe " << mz;
    }

    return 0;
}

