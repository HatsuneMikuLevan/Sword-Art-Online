11.42

#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int k1 = 3; 
    int k2 = 7; 

    // а) сумму всех элементов массива,
    int sumAll = std::accumulate(arr.begin(), arr.end(), 0);
    std::cout << "а) Сумма всех элементов: " << sumAll << std::endl;

    // б) произведение всех элементов массива;
    long long productAll = 1;
    for (int x : arr) {
        productAll *= x;
    }
    std::cout << "б) Произведение всех элементов: " << productAll << std::endl;

    // в) сумму квадратов всех элементов массива;
    long long sumSquares = 0;
    for (int x : arr) {
        sumSquares += static_cast<long long>(x) * x;
    }
    std::cout << "в) Сумма квадратов всех элементов: " << sumSquares << std::endl;

    // г) сумму шести первых элементов массива;
    int sumFirstSix = std::accumulate(arr.begin(), arr.begin() + 6, 0);
    std::cout << "г) Сумма шести первых элементов: " << sumFirstSix << std::endl;

    // д) сумму элементов массива с 1-го по k2-й (значения k1 и k2 вводятся с клавиатуры; k2>k1);
    // Индексы от k1-1 до k2-1
    int sumRange = std::accumulate(arr.begin() + (k1 - 1), arr.begin() + k2, 0);
    std::cout << "д) Сумма элементов с " << k1 << "-го по " << k2 << "-й: " << sumRange << std::endl;

    // е) среднее арифметическое всех элементов массива;
    double avgAll = static_cast<double>(sumAll) / arr.size();
    std::cout << "е) Среднее арифметическое всех элементов: " << avgAll << std::endl;

    // ж) среднее арифметическое элементов массива с s1-го по s2-й (значения s1 и s2 вводятся с клавиатуры; s2>s1) .
  
    int s1 = 2; 
    int s2 = 5; 
    int sumRangeS = std::accumulate(arr.begin() + (s1 - 1), arr.begin() + s2, 0);
    double avgRangeS = static_cast<double>(sumRangeS) / (s2 - s1 + 1);
    std::cout << "ж) Среднее арифметическое элементов с " << s1 << "-го по " << s2 << "-й: " << avgRangeS << std::endl;

    return 0;
}
