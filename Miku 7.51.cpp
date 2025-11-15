

#include <iostream>
#include <vector>
#include <numeric>

int solve_751(const std::vector<int>& sequence) {
    int sum = 0;
    int i = 0;

    while (i < sequence.size() && sequence[i] % 2 != 0) {
        sum += sequence[i];
        i++;
    }
    return sum;
}
