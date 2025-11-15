

#include <iostream>
#include <vector>

void solve_7_64(int n, const std::vector<int>& birthYears, int& countBefore1990, int& countAfter2000) {
    countBefore1990 = 0;
    countAfter2000 = 0;
    for (int i = 0; i < n; ++i) {
        if (birthYears[i] < 1990) {
            countBefore1990++;
        } else if (birthYears[i] > 2000) {
            countAfter2000++;
        }
    }
}
