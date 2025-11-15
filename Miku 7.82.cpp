

#include <iostream>
#include <vector>
#include <cmath>

// Функция для пункта а)
int count_equal_neighbors(const std::vector<int>& arr) {
    int count = 0;
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] == arr[i+1]) {
            count++;
        }
    }
    return count;
}

// Функция для пункта б)
int count_zero_neighbors(const std::vector<int>& arr) {
    int count = 0;
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] == 0 && arr[i+1] == 0) {
            count++;
        }
    }
    return count;
}

// Функция для пункта в)
int count_even_neighbors(const std::vector<int>& arr) {
    int count = 0;
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        // Проверка четности с помощью оператора остатка от деления
        if (arr[i] % 2 == 0 && arr[i+1] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Функция для пункта г)
int count_five_ending_neighbors(const std::vector<int>& arr) {
    int count = 0;
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        // Проверка окончания на цифру 5 с помощью оператора остатка от деления
        if (std::abs(arr[i]) % 10 == 5 && std::abs(arr[i+1]) % 10 == 5) {
            count++;
        }
    }
    return count;
}

void solve_782() {
    int n;
    std::cout << "Введите натуральное число n (размер массива): ";
    std::cin >> n;

    std::vector<int> a(n);
    std::cout << "Введите " << n << " целых чисел:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::cout << "a) Количество пар «соседних» чисел, равных между собой: " << count_equal_neighbors(a) << std::endl;
    std::cout << "б) Количество пар «соседних» чисел, равных нулю: " << count_zero_neighbors(a) << std::endl;
    std::cout << "в) Количество пар «соседних» чисел, являющихся четными числами: " << count_even_neighbors(a) << std::endl;
    std::cout << "г) Количество пар «соседних» чисел, оканчивающихся на цифру 5: " << count_five_ending_neighbors(a) << std::endl;
}

// Пример использования:
// int main() {
//     solve_782();
//     return 0;
// }
