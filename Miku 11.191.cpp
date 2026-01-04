

#include <iostream>
#include <vector>
#include <algorithm>

void solve_11191a(const std::vector<int>& arr) {
    int first_zero_index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) {
            first_zero_index = i;
            break;
        }
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (i != first_zero_index) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

void solve_11191b(const std::vector<int>& arr) {
    int last_zero_index = -1;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] == 0) {
            last_zero_index = i;
            break;
        }
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (i != last_zero_index) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {1, 0, 2, 0, 3, 0, 4};
    solve_11191a(data);
    solve_11191b(data);
    return 0;
}
