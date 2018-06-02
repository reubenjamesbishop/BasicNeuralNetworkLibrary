#include "Matrix.h"


Matrix::Matrix(int rows, int cols, int init_num) {

	data_.resize(rows * cols, init_num);;

	rows_ = rows;
}




