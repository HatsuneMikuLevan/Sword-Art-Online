

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n = 10; 
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = std::pow(2, i + 1);
    }

    // Вывод массива для проверки
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
