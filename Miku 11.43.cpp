

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> a = {10, 20, 30, 40, 50, 60}; // Пример массива
    int alternatingSum = 0;
    int sign = 1; // Начальный знак для первого элемента

    for (int i = 0; i < a.size(); ++i) {
        alternatingSum += a[i] * sign;
        sign = -sign; // Переключение знака без условного оператора
    }

    std::cout << "Знакопеременная сумма: " << alternatingSum << std::endl;

    return 0;
}
