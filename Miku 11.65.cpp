

#include <iostream>
#include <vector>
#include <numeric>

bool check_a(const std::vector<int>& arr) {
    int sum_a = 0;
    for (int x : arr) {
        if (x > 20) {
            sum_a += x;
        }
    }
    return sum_a > 100;
}

bool check_b(const std::vector<int>& arr) {
    int sum_b = 0;
    for (int x : arr) {
        if (x < 50) {
            sum_b += x;
        }
    }
    return sum_b % 2 == 0;
}

int main() {
    std::vector<int> arr = {10, 25, 60, 15, 45, 120, 30};
    std::cout << "Пункт а: " << (check_a(arr) ? "Верно" : "Неверно") << std::endl;
    std::cout << "Пункт б: " << (check_b(arr) ? "Верно" : "Неверно") << std::endl;
    return 0;
}
