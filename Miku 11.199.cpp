

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<double> arr = {1.5, -2.3, 4.0, -5.1, 6.7, -0.5};

    // а)
    int first_neg_idx = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] < 0) {
            first_neg_idx = i;
            break;
        }
    }
    std::cout << "а) Первый отрицательный элемент (номер " << (first_neg_idx + 1) << ") и следующие: ";
    if (first_neg_idx != -1) {
        for (int i = first_neg_idx; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    // б)
    int last_neg_idx = -1;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] < 0) {
            last_neg_idx = i;
            break;
        }
    }
    std::cout << "б) Последний отрицательный элемент (номер " << (last_neg_idx + 1) << ") и предыдущие: ";
    if (last_neg_idx != -1) {
        for (int i = 0; i <= last_neg_idx; ++i) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
