#pragma once

class Complex {
	Complex(double a=0)
	{
		re = a;
		im = 0;
	}

	Complex(double a=0, double b=0)
	{
		re = a;
		im = b;
	}

	Complex(const Complex& c)   // конструктор копирования
	{
		re = c.re;
		im = c.im;
	}

	~Complex()
	{
	}

private:
	double re; 
	double im;
public:
	double re() const; 
	double im() const; 
	double R() const; 
	double Phi() const;
Complex y(const Complex& z);
Complex sin(const Complex& z);
Complex cos(const Complex& z); 
Complex ch(const Complex& z); 
Complex sh(const Complex& z); 
Complex exp(const Complex& z); 
Complex pow(const Complex& z1, const Complex& z2);

friend Complex operator + (const Complex& lhs, const Complex& rhs) {
	static Complex tempAdd;
	tempAdd.re = lhs.re + rhs.re;
	tempAdd.im = lhs.im + rhs.im;
	return tempAdd;
}

// оператор вычитания
friend Complex operator - (const Complex& lhs, const Complex& rhs) {
	static Complex tempSub;
	tempSub.re = lhs.re - rhs.re;
	tempSub.im = lhs.im - rhs.im;
	return tempSub;
}

// оператор умножения
friend Complex operator * (const Complex& lhs, const Complex& rhs) {
	static Complex tempMult;
	tempMult.re = lhs.re * rhs.re - lhs.im * rhs.im;
	tempMult.im = lhs.im * rhs.re + lhs.re * rhs.im;
	return tempMult;
}

// оператор деления
friend Complex operator / (const Complex& lhs, const Complex& rhs) {
	static Complex tempDiv;
	tempDiv.re = (lhs.re * rhs.re + lhs.im * rhs.im) / (lhs.im * lhs.im + rhs.im * rhs.im);
	tempDiv.im = (lhs.im * rhs.re - lhs.re * rhs.im) / (lhs.im * lhs.im + rhs.im * rhs.im);
	return tempDiv;
}

};

