

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11184(std::vector<double>& speeds, size_t k) {
    if (k == 0 || k > speeds.size()) return;
    double k_speed = speeds[k - 1];
    size_t i;

    if (k > 1 && speeds[k - 2] > k_speed) {
        for (i = k - 1; i > 0; --i) {
            if (speeds[i - 1] > k_speed) {
                speeds[i] = speeds[i - 1];
            } else {
                break;
            }
        }
        speeds[i] = k_speed;
    } 

    else if (k < speeds.size() && speeds[k] < k_speed) {
        for (i = k - 1; i < speeds.size() - 1; ++i) {
            if (speeds[i + 1] < k_speed) {
                speeds[i] = speeds[i + 1];
            } else {
                break;
            }
        }
        speeds[i] = k_speed;
    }
}
