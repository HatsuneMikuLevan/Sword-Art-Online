

#include <iostream>
#include <vector>
#include <cmath> 

void solve_40_a(const std::vector<int>& arr, size_t index) {
    if (index >= arr.size() || arr[index] < 0) {
        std::cout << "Неверный индекс или отрицательное число." << std::endl;
        return;
    }
    double result = std::sqrt(static_cast<double>(arr[index]));
    std::cout << "Квадратный корень элемента с индексом " << index << ": " << result << std::endl;
}

int main() {
    std::vector<int> arr = {10, 25, 30, 42, 50};
    solve_40_a(arr, 1); 
    return 0;
}
#include <iostream>
#include <vector>

void solve_40_b(const std::vector<int>& arr, size_t index1, size_t index2) {
    if (index1 >= arr.size() || index2 >= arr.size()) {
        std::cout << "Неверный(е) индекс(ы)." << std::endl;
        return;
    }
    double average = (static_cast<double>(arr[index1]) + arr[index2]) / 2.0;
    std::cout << "Среднее арифметическое элементов с индексами " << index1 << " и " << index2 << ": " << average << std::endl;
}

int main() {
    std::vector<int> arr = {10, 25, 30, 42, 50};
    solve_40_b(arr, 1, 3); 
    return 0;
}
