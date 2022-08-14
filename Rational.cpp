#include "Rational.h"
#include<iostream>
#include "Polynomial.h"
using namespace std;

Rational::Rational(){
	Nom.setCoeff(0,0);
	Denom.setCoeff(0, 1);
}
void Rational::print() const {
	Nom.print();
	cout << "----------------------"<<endl;
	Denom.print();
}

Rational::Rational(const Polynomial& p1,const Polynomial&  p2) {
	this->Nom = p1;
	this->Denom = p2;
}
Rational::~Rational() {
	Nom.~Polynomial;
	Denom.~Polynomial;
}

Polynomial Rational::getNom() const {
	return Nom;
}
Polynomial Rational::getDenom() const {
	return Denom;
}

