

#include <iostream>
#include <vector>

int solve_7_66(int n, const std::vector<double>& sequence) {
    int count = 0;
    int i = 0;

    while (i < n && sequence[i] < 0) {
        count++;
        i++;
    }
    return count;
}
