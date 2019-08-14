#include "Racional.h"
using namespace std;

Racional::Racional(int num , int den) {
	this->denominador = den;
	this->numerador = num;
}

 Racional operator+(const Racional& n,const Racional& ne) {
	Racional Res;
	Res.numerador = ne.numerador * n.denominador + (n.numerador * ne.denominador);
	Res.denominador = ne.denominador * n.denominador;
	return Res;
}

 Racional operator-(const Racional& n, const Racional& ne) {
	Racional m;
	m.numerador = ne.numerador * n.denominador - (n.numerador * ne.denominador);
	m.denominador = ne.denominador * n.denominador;
	return m;
}

 Racional operator*(const Racional& n, const Racional& ne) {
	Racional m;
	m.numerador = ne.numerador * n.numerador;
	m.denominador = ne.denominador * n.denominador;
	return m;
}

 Racional operator/(const Racional& n, const Racional& ne) {
	Racional m;
	m.numerador = ne.numerador * n.denominador ;
	m.denominador = ne.denominador * n.numerador;
	return m;
}
void Racional::print() {
	float decimal = (float)numerador / (float)denominador;
	if (denominador == 0 || numerador == 0)
	{
		cout << "Division entre 0 no se puede";
	}
	else {
		reducir(numerador, denominador);
		cout << "Valor en Punto Flotante Redondeado: "<< decimal <<endl;

	}
 }
void Racional::reducir(int num,int den) {
	for (int i = 1; i < 100; i++)
	{
		if (num % i == 0 && den % i == 0)
		{
			num /= i;
			den /= i;
			i = 2;
		}
	}
	cout<<"Fraccion Resultante\n\t" << num << "\n\t" << den << endl;
}
