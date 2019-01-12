#pragma once

class Complex {
private:
	//double real;
	//double image;
public:
	double real;
	double image;
	Complex(double r = 0.0, double i = 0.0) {
		real = r;
		image = i;
	}
	 void add(Complex);
	 void multiply(Complex);
	 void abs();
	 void print();
	 void get_num();

};