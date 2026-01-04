

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11189a(const std::vector<int>& arr) {
    int first_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 5) {
            first_index = i + 1; 
            break;
        }
    }
    if (first_index != -1) {
        std::cout << "Номер первого элемента, равного 5: " << first_index << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }
}

void solve_11189b(const std::vector<int>& arr) {
    int last_index = -1;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] == 5) {
            last_index = i + 1; 
            break;
        }
    }
    if (last_index != -1) {
        std::cout << "Номер последнего элемента, равного 5: " << last_index << std::endl;
    } else {
        std::cout << "Элемент не найден" << std::endl;
    }
}

int main() {
    std::vector<int> data = {1, 5, 2, 5, 3, 5, 4};
    solve_11189a(data);
    solve_11189b(data);
    return 0;
}
