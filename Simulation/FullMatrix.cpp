#include <../include/FullMatrix.h>
#include <stdlib.h>

namespace orbsim{
    FullMatrix::FullMatrix(uint64_t y, uint64_t x){
        this->matrix = (double*)malloc(x*y*sizeof(double));
        this->x = x;
        this->y = y;
    }
    FullMatrix::~FullMatrix(){
        free(this->matrix);
    }
}