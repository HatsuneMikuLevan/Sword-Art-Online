

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr(25);

    // Заполнение числами от 1 до 25
    std::iota(arr.begin(), arr.end(), 1);

    // Добавление чисел 100 и 200
    arr.push_back(100);
    arr.push_back(200);

    // Вывод массива для проверки
    std::cout << "Массив 11.11: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
