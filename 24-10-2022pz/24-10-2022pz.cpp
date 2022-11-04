// 24-10-2022pz.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    //Napisz program obliczania miejsc zerowych funkcji liniowej postaci ax + b gdzie a≠0(wer.1.0)

    double a, b, delta, mz1, mz2, mz0;

    cout << "Obliczanie miejsc zerowych funkcji kwadratowej" << endl;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;

    delta = b*b - 4*a*c;
    cout << "Delta: " << delta;

    if(delta == 0){
	mz0 = -b/a;
	cout << "Funkcja ma jedno miejsce zerowe"<< mz0;
    }else if(delta > 0){

    mz1 = (-b - sqrt(delta))/2*a
    cout << "mz 1 :" << mz1;
    mz1 = (-b + sqrt(delta))/2*a
    cout << "mz 2 :" << mz2;
    }else{ cout << "Funkcja nie ma miejsc zerowych"}


    return 0;
}

