

#include <iostream>
#include <vector>

int solve_7_65(int n, const std::vector<int>& wins, const std::vector<int>& losses) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (wins[i] > losses[i]) {
            count++;
        }
    }
    return count;
}
