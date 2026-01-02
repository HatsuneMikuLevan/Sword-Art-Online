

#include <iostream>
#include <vector>
#include <climits>

void solve_11_138(const std::vector<int>& speeds) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int speed : speeds) {
        if (speed > max1) {
            max2 = max1;
            max1 = speed;
        } else if (speed > max2 && speed < max1) {
            max2 = speed;
        }
    }
    std::cout << "Max speeds: " << max1 << ", " << max2 << std::endl;
}
