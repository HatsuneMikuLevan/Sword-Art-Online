

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11190a(const std::vector<int>& arr) {
    int first_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] > 65530) {
            first_index = i + 1;
            break;
        }
    }
    if (first_index != -1) {
        std::cout << "Номер первого элемента, большего 65530: " << first_index << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }
}

void solve_11190b(const std::vector<int>& arr) {
    int last_index = -1;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] > 65530) {
            last_index = i + 1;
            break;
        }
    }
    if (last_index != -1) {
        std::cout << "Номер последнего элемента, большего 65530: " << last_index << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }
}

int main() {
    std::vector<int> data = {1, 70000, 2, 80000, 3, 90000, 4};
    solve_11190a(data);
    solve_11190b(data);
    return 0;
}
