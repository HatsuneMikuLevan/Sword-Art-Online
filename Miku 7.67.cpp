

#include <iostream>
#include <vector>

int solve_7_67(int n, const std::vector<double>& sequence) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (sequence[i] == 0) {
            break;
        }
        count++;
    }
    return count;
}
