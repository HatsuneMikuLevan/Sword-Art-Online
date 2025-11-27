

#include <iostream>
#include <vector>
#include <numeric>

int count_not_last(const std::vector<int>& arr) {
    if (arr.empty()) return 0;
    int last_element = arr.back();
    int count = 0;
    for (int x : arr) {
        if (x != last_element) {
            count++;
        }
    }
    return count;
}

int count_multiple_of_a(const std::vector<int>& arr, int a) {
    if (a == 0) return 0;
    int count = 0;
    for (int x : arr) {
        if (x % a == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {10, 5, 2, 5, 0, 5, 3};
    int a = 5;
    std::cout << "Количество элементов, отличных от последнего: " << count_not_last(arr) << std::endl;
    std::cout << "Количество элементов, кратных " << a << ": " << count_multiple_of_a(arr, a) << std::endl;
    return 0;
}
