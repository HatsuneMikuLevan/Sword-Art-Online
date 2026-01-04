

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11179(std::vector<double>& results) {
    if (results.size() < 2) return;
    double first_result = results[0];
    size_t i = 0;
    for (i = 0; i < results.size() - 1; ++i) {
        if (results[i + 1] > first_result) {
            results[i] = results[i + 1];
        } else {
            break;
        }
    }
    results[i] = first_result;
}
