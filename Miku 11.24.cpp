

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {5, 12, 99, 100, 250, 999, 1000, 1500};
    std::cout << "а) Двузначные числа: ";
    for (int num : arr) {
        if (num >= 10 && num <= 99) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "б) Трехзначные числа: ";
    for (int num : arr) {
        if (num >= 100 && num <= 999) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
