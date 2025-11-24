

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {12, 15, 20, 33, 40, 55, 60, 71};
    std::cout << "а) Четные элементы: ";
    for (int num : arr) {
        if (num % 2 == 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "б) Элементы, оканчивающиеся нулем: ";
    for (int num : arr) {
        if (num % 10 == 0) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
