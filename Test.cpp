//
// Created by nivtal9 & AVI on 27.4.2020.
//

#include "solver.hpp"
#include "doctest.h"

TEST_CASE("Find method") {
    solver::RealVariable x;
    for (int i = 0; i < 100; i++) {
                CHECK(solver::solve(2 * x - 4 == 10));
    }
}
