#include "Polynomial.h"
#include<iostream>
using namespace std;

Polynomial::Polynomial() {
	sizeArr = 1;
	CeoffArr = new double[sizeArr];
	CeoffArr[0] = 0;
}

Polynomial::Polynomial(int const dgree) {
	sizeArr = dgree;
	CeoffArr = new double[sizeArr];
	for (int i = 0; i < sizeArr; i++) {
		CeoffArr[i] = 0;
	}
}
Polynomial::Polynomial(double* poly, int dgree) {
	sizeArr = dgree+1;
	CeoffArr = new double[sizeArr];
	for (int i = 0; i < sizeArr; i++) {
		CeoffArr[i] = poly[i];
	}
}
Polynomial::~Polynomial() {
	delete[] = CeoffArr;
	sizeArr = 0;
	CeoffArr = nullptr;
	cout << "Polynomial detroyed";
}

double* Polynomial::getPoly()const {
	return CeoffArr;
}
int Polynomial::getSize()const {
	return sizeArr;
}
int Polynomial::getCoeff(int index) const{	
return CeoffArr[index];
}
double Polynomial::getDegree(bool a) const{
	if (a) {
		for (int i = sizeArr; i >=0; i--) {
			if (CeoffArr[i] != 0) {
				return i;
			}
		}
	}
	return sizeArr;
}


void Polynomial::print() const {
	cout << "Polynomial = ";
	int i, last = 0;
	if (!sizeArr) {
		cout << 0;
	}
	cout << CeoffArr[0];
	for (i = 0; i < sizeArr; i++) {
		if (CeoffArr[i] != 0) {
			last = i;
		}
	}
	for (i = 1; i <= last; i++) {
		if (CeoffArr[i] >= 0) {
			cout << "+" << CeoffArr[i] << "x^" << i;
		}
	}
	cout << "\n";
}
void Polynomial::setCoeff(int dgree, double v) {
	CeoffArr[dgree] = v;
}
