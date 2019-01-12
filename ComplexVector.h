#pragma once
#include "complex.h"

class ComplexVector {
private:
	int size;
	Complex* arr;
public:
	ComplexVector() {
		size = 0;
		arr = new Complex[size];
	}

	void add(ComplexVector);
	void random();
    void plus(ComplexVector smt);
	void print_vector();
};