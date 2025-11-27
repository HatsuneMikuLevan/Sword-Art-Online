

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main() {
    std::vector<int> arr = {10, 25, 5, 30, 15, 20, 40};
    int sum_le_20 = 0;

    for (int x : arr) {
        if (x <= 20) {
            sum_le_20 += x;
        }
    }

    std::cout << "Сумма элементов, не превышающих 20: " << sum_le_20 << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr = {10, 25, 5, 30, 15, 20, 40};
    int a = 15; // Заданное число 'a'
    int sum_gt_a = 0;

    for (int x : arr) {
        if (x > a) {
            sum_gt_a += x;
        }
    }

    std::cout << "Сумма элементов, больших числа " << a << ": " << sum_gt_a << std::endl;

    return 0;
}
