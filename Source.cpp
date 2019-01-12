#include <iostream>
#include"complex.h"
#include "ComplexVector.h"

void main() {
	//Complex comp(2.7, 7.5);
	//comp.print();
	//Complex ness(3.1, 2.0);
	//ness.print();
	//ness.add(comp);
	//ness.print();
	//ness.multiply(comp);
	//ness.print();
	//ness.abs();
	//ness.print();

	ComplexVector vec_one;
	ComplexVector vec_two;
	vec_one.random();
	vec_two.random();
	std::cout << " vector 1: "<<std::endl;
	vec_one.print_vector();
	std::cout << "vector 2: "<<std::endl; 
	vec_two.print_vector();
	vec_one.add(vec_two);
	std::cout << "new first vector: "<<std::endl;
	vec_one.print_vector();
	std::cout << "sum of tvo vectors: " << std::endl;
	vec_one.plus(vec_two);
	vec_one.print_vector();
}
