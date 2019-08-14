#include <iostream>
#include "Racional.h"
using namespace std;


int main() {
	Racional num(25, 5);
	Racional num3(26, 6);

	Racional x = num * num3;
	x.print();
}
