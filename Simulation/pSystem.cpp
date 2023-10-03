#include "../include/pSystem.h"

namespace orbsim
{
    pSystem::pSystem(State* st){
        uint64_t N = st->n;
        this->J = new FullMatrix(N,N*4);
        this->J_dot = new FullMatrix(N,N*4);
        this->W = new FullMatrix(N*4,N*4);
        this->Q = new FullMatrix(N*4,1);
        this->state = st;
    }
} 
