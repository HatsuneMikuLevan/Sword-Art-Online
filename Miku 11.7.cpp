

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

void fillArrayRandomInt(std::vector<int>& arr, int a, int b) {
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dis(a, b);

    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = dis(gen);
    }
}

int main() {
    int n = 10; // Пример размера
    int a = 1;  // Пример нижней границы
    int b = 100; // Пример верхней границы
    std::vector<int> arr(n);

    fillArrayRandomInt(arr, a, b);

    // Вывод массива для проверки
    std::cout << "Массив 11.7: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << (i == n - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
