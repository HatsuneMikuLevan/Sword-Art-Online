

#include <iostream>
#include <vector>

void solve_7_63(int n, const std::vector<int>& grades, int& count5, int& count2) {
    count5 = 0;
    count2 = 0;
    for (int i = 0; i < n; ++i) {
        if (grades[i] == 5) {
            count5++;
        } else if (grades[i] == 2) {
            count2++;
        }
    }
}
