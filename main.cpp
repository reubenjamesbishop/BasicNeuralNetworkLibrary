#include "Matrix.h"

int main() {


	Matrix M1 (2,2);

	Matrix M2 (2,2);

	//Testing basic functionality of Matricies

	M1.Randomize();
	M2.Randomize();

	Matrix M3 = M1 + M2;

	M3.Print();


	M3 = M3 - M1;

	M3.Print();


	return 0;
}