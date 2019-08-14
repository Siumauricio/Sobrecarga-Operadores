#pragma once
#include <iostream>
using namespace std;



class Racional {

public:
	Racional(int num = 0, int den = 0);
	friend Racional operator +(const Racional& num , const Racional& den);
	friend Racional operator -(const Racional& num, const Racional& den);
	friend Racional operator *(const Racional& num, const Racional& den);
	friend Racional operator /(const Racional& num, const Racional& den);
	void reducir(int num,int den);
	void print();
private:
	int numerador;
	int denominador;

};
