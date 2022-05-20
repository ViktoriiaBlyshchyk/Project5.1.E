#pragma once
#include "Object.h"

class Complex :
    public Object
{
    double x, y;
public:
    Complex();
    Complex(double, double);
    Complex(const Complex&);

	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double x) { this->x = x; }
	void SetY(double y) { this->y = y; }

	operator string() const;

	friend ostream& operator <<(ostream&, const Complex&);
	friend istream& operator >>(istream&, Complex&);

	friend Complex operator + (const Complex&, const Complex&);
	friend Complex operator * (const Complex&, const Complex&);
	friend bool operator == (const Complex&, const Complex&);
};

