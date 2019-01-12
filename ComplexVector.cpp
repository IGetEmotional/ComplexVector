#include "ComplexVector.h"
#include <iostream>
#include <ctime>
#include "complex.h"

void ComplexVector::add(ComplexVector smt) {
	Complex* sum_arr = new Complex[size + smt.size];
	for (int i = 0; i < size; ++i) {
		sum_arr[i] = arr[i];
	}
	for (int i = 0; i < smt.size; ++i) {
		sum_arr[i + size] = smt.arr[i];
	}
	delete[] arr;
	arr = sum_arr;
	size += smt.size;
}

void ComplexVector::random() {  //two vectors are similar  
	srand(time(0));
	size = 2;
	Complex* ness = new Complex[size];
	for (int i = 0; i < size; ++i) {
		double real = (float (rand())) / ((float) (RAND_MAX / 10));
		double image = (float(rand())) / ((float) (RAND_MAX / 10));
		ness[i] = Complex(real, image);
	}
	arr = ness;
}

void ComplexVector::plus(ComplexVector smt) {
	size = 2;
	for (int i = 0; i < size; i++) {
	 arr[i].add(smt.arr[i]);
	}
}

void ComplexVector::print_vector() {
	for (int i = 0; i < size; ++i) {
		arr[i].get_num();
		std::cout << " ";
	}
}
