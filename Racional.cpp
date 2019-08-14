#include "Racional.h"
using namespace std;

Racional::Racional(int num , int den) {
	this->denominador = den;
	this->numerador = num;
}
Racional& Racional::operator+(const Racional& n) {
	Racional Res;
	int f = 0;
	Res.numerador = numerador * n.denominador + (n.numerador * denominador);
	Res.denominador = denominador * n.denominador;
	for (int i = 1; i < 100; i++)
	{
		i++;
		if (Res.numerador%i==0&&Res.denominador%i==0)
		{
			Res.numerador /= i;
			Res.denominador /= i;
			i = 1;
		}
	}
	return Res;
}

Racional& Racional::operator-(const Racional& n) {
	Racional m;
	m.numerador = numerador * n.denominador - (n.numerador * denominador);
	m.denominador = denominador * n.denominador;
	for (int i = 1; i < 50; i++)
	{
		i++;
		if (m.numerador % i == 0 && m.denominador % i == 0)
		{
			m.numerador /= i;
			m.denominador /= i;
			i = 1;
		}
	}
	return m;
}
Racional& Racional::operator*(const Racional& n) {
	Racional m;
	m.numerador = numerador * n.numerador;
	m.denominador = denominador * n.denominador;
	for (int i = 1; i < 50; i++)
	{
		i++;
		if (m.numerador % i == 0 && m.denominador % i == 0)
		{
			m.numerador /= i;
			m.denominador /= i;
			i = 1;
		}
	}
	return m;
}
Racional& Racional::operator/(const Racional& n) {
	Racional m;
	m.numerador = numerador * n.denominador ;
	m.denominador = denominador * n.numerador;
	for (int i = 1; i < 50; i++)
	{
		if (m.numerador%i==0 && m.denominador%i==0)
		{
			m.numerador /= i;
			m.denominador /= i;
			i = 1;
		}
	}

	return m;
}
void Racional::print() {
	if (denominador == 0 || numerador == 0)
	{
		cout << "Division entre 0 no se puede";
	}
	else {
		cout << "Suma De Fracciones\n\t" << numerador << "\n\t" << denominador << endl;
		cout << "Valor en Punto Flotante Redondeado: "<< numerador / denominador <<endl;

	}
 }
