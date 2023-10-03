#include "../include/State.h"
#include <cstdlib>

namespace orbsim {

    State::State(uint32_t n) {
        this->n = n;

        // Allocate memory for various arrays
        ax = (double*)malloc(n * sizeof(double));
        ay = (double*)malloc(n * sizeof(double));
        vx = (double*)malloc(n * sizeof(double));
        vy = (double*)malloc(n * sizeof(double));
        x = (double*)malloc(n * sizeof(double));
        y = (double*)malloc(n * sizeof(double));

        theta = (double*)malloc(n * sizeof(double));
        v_theta = (double*)malloc(n * sizeof(double));
        a_theta = (double*)malloc(n * sizeof(double));

        m = (double*)malloc(n * sizeof(double));

        Fx = (double*)malloc(n * sizeof(double));
        Fy = (double*)malloc(n * sizeof(double));

        dt = 0.01;
    }

    State::~State() {
        // Free memory for all dynamically allocated arrays
        free(ax);
        free(ay);
        free(vx);
        free(vy);
        free(x);
        free(y);

        free(theta);
        free(v_theta);
        free(a_theta);

        free(m);

        free(Fx);
        free(Fy);
    }

} // namespace orbsim
