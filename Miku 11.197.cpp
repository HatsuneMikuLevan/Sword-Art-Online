

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> arr = {10, 20, 37, 40, 50, 27, 60, 17, 80};
    int n = 20;

    // а)
    bool found_a = false;
    std::cout << "а) Элементы до первого вхождения " << n << ": ";
    for (int x : arr) {
        if (x == n) {
            found_a = true;
            break;
        }
        std::cout << x << " ";
    }
    if (!found_a) {
        for (int x : arr) std::cout << x << " ";
    }
    std::cout << std::endl;

    // б)
    int last_idx_b = -1;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (std::abs(arr[i]) % 10 == 7) {
            last_idx_b = i;
            break;
        }
    }
    std::cout << "б) Элементы после последнего оканчивающегося на 7: ";
    if (last_idx_b != -1) {
        for (int i = last_idx_b + 1; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
