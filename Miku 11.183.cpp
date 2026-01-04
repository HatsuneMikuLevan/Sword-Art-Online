

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11183(std::vector<int>& population) {
    if (population.size() < 2) return;
    int last_pop = population[population.size() - 1];
    size_t i = population.size() - 1;
    for (i = population.size() - 1; i > 0; --i) {
        if (population[i - 1] > last_pop) {
            population[i] = population[i - 1];
        } else {
            break;
        }
    }
    population[i] = last_pop;
}
