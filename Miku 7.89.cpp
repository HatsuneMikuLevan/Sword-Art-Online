#include <iostream>
#include <vector>

int main() {
    int m, p;
    std::cout << "Введите натуральное число m: ";
    std::cin >> m;

    if (m <= 0) {
        std::cout << "m должно быть натуральным числом." << std::endl;
        return 1;
    }

    std::vector<int> a(m); // Использование вектора как динамического массива
    std::cout << "Введите " << m << " целых чисел a1, ..., am: " << std::endl;
    for (int i = 0; i < m; ++i) {
        std::cin >> a[i]; // Обращение к элементу массива по индексу [6]
    }

    std::cout << "Введите целое число p (делитель): ";
    std::cin >> p;

    if (p == 0) {
        std::cout << "p не может быть равно нулю." << std::endl;
        return 1;
    }

    int count = 0;
    for (int i = 0; i < m; ++i) {
        if (a[i] > m) {
            count++;
        }
    }

    bool is_multiple = (count % p == 0);

    std::cout << "Количество чисел, больших m: " << count << std::endl;
    if (is_multiple) {
        std::cout << "Количество кратно p." << std::endl;
    } else {
        std::cout << "Количество не кратно p." << std::endl;
    }

    return 0;
}
