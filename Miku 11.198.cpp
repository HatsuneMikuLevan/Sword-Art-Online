

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> arr = {10, 20, 37, 40, 50, 27, 60, 17, 80};

    // а)
    int odd_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (std::abs(arr[i]) % 2 != 0) {
            odd_index = i;
            break;
        }
    }
    std::cout << "а) Номер первого нечетного элемента: ";
    if (odd_index != -1) {
        std::cout << odd_index + 1 << std::endl;
    } else {
        std::cout << "Нечетных элементов нет" << std::endl;
    }

    // б)
    int multiple_of_13_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 13 == 0) {
            multiple_of_13_index = i;
            break;
        }
    }
    std::cout << "б) Номер первого элемента, кратного 13: ";
    if (multiple_of_13_index != -1) {
        std::cout << multiple_of_13_index + 1 << std::endl;
    } else {
        std::cout << "Элементов, кратных 13, нет" << std::endl;
    }

    return 0;
}
