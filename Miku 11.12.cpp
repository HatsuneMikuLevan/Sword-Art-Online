

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr(20);
    for (int i = 0; i < 20; ++i) {
        arr[i] = 20 - i;
    }

    // Вывод массива для проверки
    for (int i = 0; i < 20; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
