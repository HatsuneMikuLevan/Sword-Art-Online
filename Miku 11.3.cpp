

#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

int main() {
    const int size = 15;
    std::vector<double> arr_a(size), arr_b(size), arr_c(size), arr_d(size);
    std::vector<int> arr_e(size);

    std::random_device rd;
    std::mt19937 gen(rd());

    // а) вещественными значениями, лежащими в диапазоне от 0 до 1;
    std::uniform_real_distribution<> dis_a(0.0, 1.0);
    for (int i = 0; i < size; ++i) arr_a[i] = dis_a(gen);

    // б) вещественными значениями x (22 <= x < 23);
    std::uniform_real_distribution<> dis_b(22.0, 23.0);
    for (int i = 0; i < size; ++i) arr_b[i] = dis_b(gen);

    // в) вещественными значениями x (0 < x < 10);
    std::uniform_real_distribution<> dis_c(0.0, 10.0);
    for (int i = 0; i < size; ++i) arr_c[i] = dis_c(gen);

    // г) вещественными значениями x (-50 < x < 50);
    std::uniform_real_distribution<> dis_d(-50.0, 50.0);
    for (int i = 0; i < size; ++i) arr_d[i] = dis_d(gen);

    // д) целыми значениями, лежащими диапазоне от 0 до 10 включительно.
    std::uniform_int_distribution<> dis_e(0, 10);
    for (int i = 0; i < size; ++i) arr_e[i] = dis_e(gen);

    // Пример вывода для подпункта 'д'
    std::cout << "Массив 11.3 (д): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr_e[i] << (i == size - 1 ? "" : ", ");
    }
    std::cout << std::endl;

    return 0;
}
