#pragma once
#include "Polynomial.h"
class Rational
{
private:
	Polynomial Nom;
	Polynomial Denom;
public:
	Rational();
	void print() const;
	Rational(const Polynomial& p1,const Polynomial& p2);
	~Rational();
	Polynomial getNom() const;
	Polynomial getDenom() const;

};

