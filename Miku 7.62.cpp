#include <iostream>
#include <vector>

int solve_7_62_a(int n, const std::vector<int>& a) {
    int count = 0;
    for (int p = 0; p < n; ++p) {
        if (a[p] > (p + 1)) {
            count++;
        }
    }
    return count;
}
#include <iostream>
#include <vector>
#include <cmath>

int solve_7_62_b(int n, const std::vector<int>& a) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (std::abs(a[i] % 10) == 5) {
            count++;
        }
    }
    return count;
}
#include <iostream>
#include <vector>

int solve_7_62_v(int n, const std::vector<int>& a, int k) {
    int count = 0;
    for (int p = 0; p < n; ++p) {
        if (a[p] % k == 0) {
            count++;
        }
    }
    return count;
}
