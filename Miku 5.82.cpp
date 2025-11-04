#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::cout << "а) Двузначные числа, сумма квадратов цифр которых делится на 13:" << std::endl;
    std::vector<int> result_a;
    for (int i = 10; i < 100; ++i) {
        int a = i / 10;
        int b = i % 10;
        if ((a * a + b * b) % 13 == 0) {
            result_a.push_back(i);
        }
    }
    for (int num : result_a) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "б) Двузначные числа, обладающие следующим свойством:" << std::endl;
    std::vector<int> result_b;
    for (int i = 10; i < 100; ++i) {
        int a = i / 10;
        int b = i % 10;
        int sum_of_digits = a + b;
        if (sum_of_digits + sum_of_digits * sum_of_digits == i) {
            result_b.push_back(i);
        }
    }
    for (int num : result_b) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
