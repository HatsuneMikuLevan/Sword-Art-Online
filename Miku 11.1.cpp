

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {37, 0, 50, 46, 34, 46, 0, 13};

    // Вывод массива для проверки
    std::cout << "Массив 11.1: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
