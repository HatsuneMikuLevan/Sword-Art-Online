

#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<double> arr = {1.5, -2.3, 4.0, 55.1, -0.1, 10.0, 50.55, 3.2, 50.0, 2.1}; // Пример массива
    int countPositive = 0;
    int countNotGreaterThan50_55 = 0;

    for (double element : arr) {
        if (element > 0) {
            countPositive++;
        }
        if (element <= 50.55) {
            countNotGreaterThan50_55++;
        }
    }

    bool conditionA = countPositive <= 5;
    bool conditionB = countNotGreaterThan50_55 % 4 == 0;

    std::cout << std::boolalpha;
    std::cout << "а) Количество положительных элементов не превышает 5: " << conditionA << std::endl;
    std::cout << "б) Количество элементов, которые не больше 50.55, кратно четырем: " << conditionB << std::endl;

    return 0;
}
