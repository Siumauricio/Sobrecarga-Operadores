#pragma once
#include <iostream>
using namespace std;



class Racional {

public:
	Racional(int num = 0, int den = 0);
	Racional& operator +(const Racional& n);
	Racional& operator -(const Racional& n);
	Racional& operator *(const Racional& n);
	Racional& operator /(const Racional& n);
	void reducir(int num,int den);
	void print();
private:
	int numerador;
	int denominador;

};
