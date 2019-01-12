#include "complex.h"
#include <iostream>

 void Complex::add(Complex x) {
	this->real +=x.real ;
	this->image += x.image;
}

void Complex::multiply(Complex x) {
	this->real *= x.real;
	this->image *= x.image;
}

void Complex::abs() {
	if (this->real < (0,0)) {
		this->real = -(this->real);
	}
	if (this->image < (0, 0)) {
		this->image = -(this->image);
	}
}

void Complex::print() {
	std::cout << this->real << std::endl << this->image << std::endl;
}

void Complex::get_num() {
	std::cout << real << "+" << image << std::endl;
}