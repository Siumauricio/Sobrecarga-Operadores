#pragma once
#include <iostream>
using namespace std;



class Racional {

public:
	Racional(int num = 0, int den = 0);

		//Racional res;
	Racional& operator +(const Racional& n);
	Racional& operator -(const Racional& n);
	Racional& operator *(const Racional& n);
	Racional& operator /(const Racional& n);

	void print();
private:
	int numerador;
	int denominador;

};
