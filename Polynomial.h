#pragma once
class Polynomial
{
private:
	int sizeArr;
	double* CeoffArr;
public:
	Polynomial();
	Polynomial(int const dgree);
	Polynomial(double* poly, int dgree);
	~Polynomial();
	double* getPoly()const;
	int getSize()const;
	int getCoeff(int index)const;
	double getDegree(bool a) const;
	int getMaxDegree() const {
		return sizeArr;
	}
	void print() const;
	void setCoeff(int d, double b);

};

