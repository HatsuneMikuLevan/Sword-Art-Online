

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Пример данных: массив из 15 элементов, отсортированный по возрастанию
    std::vector<double> y = {-5.0, -3.0, -1.0, 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 12.0};
    double n = 4.5; // Пример числа n, удовлетворяющего условиям

    double sum_less_n = 0.0;
    for (double val : y) {
        if (val < n) {
            sum_less_n += val;
        } else {
            break; // Остановка, так как массив отсортирован
        }
    }

    std::cout << "Сумма чисел последовательности, меньших n: " << sum_less_n << std::endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    // Пример инициализации массива (должен быть отсортирован по возрастанию)
    std::vector<double> y = {1.0, 2.5, 3.0, 4.2, 5.5, 6.0, 7.1, 8.0, 9.5, 10.0, 11.2, 12.0, 13.5, 14.0, 15.0};
    double n = 7.5; // Пример значения n, y1 < n < y15
    int size = y.size(); // Получение размера массива [6]

    int index = -1;
    for (int i = 0; i < size - 1; ++i) {
        if (y[i] < n && n < y[i+1]) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "Значение n находится между элементами:" << std::endl;
        std::cout << "Элемент 1 (порядковый номер " << index + 1 << ", значение): " << y[index] << std::endl;
        std::cout << "Элемент 2 (порядковый номер " << index + 2 << ", значение): " << y[index+1] << std::endl;
    } else {
        std::cout << "Подходящие элементы не найдены." << std::endl;
    }

    return 0;
}
