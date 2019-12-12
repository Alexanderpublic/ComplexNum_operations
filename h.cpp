#include "h.h"
#include <cmath>

#define PI 3.14159265

double Complex::re() const
{
	return this->re;
}

double Complex::im() const
{
	return this->im;
}

double Complex::R() const
{
	return sqrt(this->re * this->re + this->im * this->im);
}

double Complex::Phi() const
{
	double t = atan2(re, im) * 180 / PI;
	return ;
}

Complex Complex::y(const Complex& z)
{
	return operator+(operator*(z,Complex(2, 0)),Complex::sin(operator-(z, Complex(0, 1))));
}

Complex Complex::sin(const Complex& z)
{
	return Complex();
}

Complex Complex::cos(const Complex& z)
{
	return Complex();
}

Complex Complex::ch(const Complex& z)
{
	double result = 1;
	double member = 1;
	for (int i = 1; abs(member) >= 0,0001; i++)
	{
		member *= z * z;
		member /= 2 * i * (2 * i - 1);
		result += member;
	}
	return result;
}

Complex Complex::sh(const Complex& z)
{
	return Complex();
}

Complex Complex::exp(const Complex& z)
{
	return Complex();
}

Complex Complex::pow(const Complex& z1, const Complex& z2)
{
	return Complex();
}
