

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {10, -20, 50, 150, 0, -5, 100, 200};
    std::cout << "а) Неотрицательные элементы: ";
    for (int num : arr) {
        if (num >= 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "б) Элементы, не превышающие 100: ";
    for (int num : arr) {
        if (num <= 100) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
